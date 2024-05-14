using UnityEngine;
using UnityEngine.SocialPlatforms.GameCenter;
using AOT;

namespace Online
{
//#if (UNITY_IOS)
    public class AuthorizeGameCenter : MonoBehaviour
    {
        [MonoPInvokeCallback(typeof(GameCenterSignature.OnSucceeded))]
        private static void OnSucceeded(
            string PublicKeyUrl, 
            ulong timestamp,
            string signature,
            string salt,
            string playerID,
            string alias,
            string bundleID)
        {
            Debug.LogError("Succeeded authorization to gamecenter: \n" +
                "PublicKeyUrl=" + PublicKeyUrl + "\n" +
                "timestamp=" + timestamp + "\n" +
                "signature=" + signature + "\n" + 
                "salt=" + salt + "\n" +
                "playerID=" + playerID + "\n" +
                "alias=" + alias + "\n" +
                "bundleID=" + bundleID);
        }

        [MonoPInvokeCallback(typeof(GameCenterSignature.OnFailed))]
        private static void OnFailed(string reason)
        {
            Debug.Log("Failed to authenticate with gamecenter:" + reason);
        }

        private void OnLocalAuthenticateResult(bool success)
        {
            if (success)
            {
                Debug.Log("LocalAuthenticate success!");

                GameCenterSignature.Generate(OnSucceeded, OnFailed);
            }
            else
            {
                Debug.Log("LocalAuthentificate failed.");
            }
        }

        public void Process()
        {
            if (Social.localUser.authenticated)
            {
                GameCenterSignature.Generate(OnSucceeded, OnFailed);
            }
            else
            {
                Social.localUser.Authenticate(OnLocalAuthenticateResult);
            }
        }
    }
//#endif
}