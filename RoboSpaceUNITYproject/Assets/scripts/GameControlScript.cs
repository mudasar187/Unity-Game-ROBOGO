using UnityEngine;

public class GameControlScript : MonoBehaviour
{
	public float ScrollSpeed = 25f; // Number of units we scroll each second.
	public float TimeExtension = 1.5f; // Time-extension (in seconds) for a pickup.
	public MoveGroundScript MoveGroundScript;


	private float _timeRemaining = 60;
	private float _totalTimeElapsed;
	private bool _isGameOver;



	public void PowerupCollected() {
		_timeRemaining += TimeExtension;
	}

	public void SlowWorldDown() {
		CancelInvoke("RestoreWorldSpeed"); // Cancel any cued commands to restore world speed.
		Invoke("RestoreWorldSpeed", 1); // Speed the world up again after this duration.
		Time.timeScale = 1f;
	}
	void RestoreWorldSpeed() {
		Time.timeScale = 1f;
	}

	void Update() {
	}
	 

}

