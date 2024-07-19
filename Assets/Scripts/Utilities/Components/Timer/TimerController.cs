using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public sealed class TimerController : MonoBehaviour
{
   private float m_TimeToWait = 0;

   private Coroutine m_RequestRoutine = null;
   private GameEvent m_OnTimerCompletedEvent = new();
   private GameEvent<string> m_OnTimerTickEvent = new();

   private void Start()
   {
      DontDestroyOnLoad(gameObject);
   }
   
   private void OnEnable()
   {
      GameEvents.TimerEvents.ExecuteActionRequest.Register(OnExecuteActionRequest);
      GameEvents.TimerEvents.CancelActionRequest.Register(OnRequestCancel);
   }

   private void OnDisable()
   {
      GameEvents.TimerEvents.ExecuteActionRequest.UnRegister(OnExecuteActionRequest);
      GameEvents.TimerEvents.CancelActionRequest.UnRegister(OnRequestCancel);
   }

   private void OnExecuteActionRequest(TimerDataObject timerDataObject)
   {
      float timeDuration = timerDataObject.TimeDuration;

      m_TimeToWait = timerDataObject.TimeDuration;
      
      InitializeEvent(timerDataObject.ActionToExecute);
      InitializeEvent(timerDataObject.TickTimeEvent);

      if (timerDataObject.IsNetworkGlobal)
         GameEvents.NetworkEvents.NetworkTimerStartRequest.Raise(timerDataObject.Title, timeDuration);

      m_RequestRoutine = StartCoroutine(StartTimer(m_TimeToWait));
   }

   private void OnRequestCancel()
   {
      StopCoroutine(m_RequestRoutine);
      m_RequestRoutine = null;
   }
   
   private void InitializeEvent(Action action)
   {
      m_OnTimerCompletedEvent.UnRegisterAll();
      m_OnTimerCompletedEvent.Register(action);
   }

   private void InitializeEvent(Action<string> action)
   {
      m_OnTimerTickEvent.UnRegisterAll();
      m_OnTimerTickEvent.Register(action);
   }
   IEnumerator StartTimer(float time)
   {
      int minutes = Mathf.FloorToInt(time / 60F);
      int seconds = Mathf.FloorToInt(time - minutes * 60);
      string timerString = $"{minutes:0}:{seconds:00}";
      
      
      yield return new WaitForSeconds(1f);
      time--;

      if (time >= 0)
      {
         m_OnTimerTickEvent.Raise(timerString);
         m_RequestRoutine = StartCoroutine(StartTimer(time));
      }
      else
      {
         m_OnTimerTickEvent.Raise("0:00");
         m_OnTimerCompletedEvent.Raise();
      }
   }


}
