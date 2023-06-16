using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SplashController : MonoBehaviour
{
    public void LoadMenuScene()
    {
        Invoke(nameof(LoadSceneInternal), 2f);
    }

    private void LoadSceneInternal()
    {
        SceneManager.LoadScene("GameMenu");   
    }
}
