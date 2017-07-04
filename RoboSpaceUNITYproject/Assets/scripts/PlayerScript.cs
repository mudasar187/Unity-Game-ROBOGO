using UnityEngine;

public class PlayerScript : MonoBehaviour
{
	public float StrafeSpeed = 4f;


	private GameControlScript _gameControlScript;
	private Animator _animator;
	private bool _jumping;

	void Start() {
		_gameControlScript = FindObjectOfType<GameControlScript>();
		_animator = GetComponent<Animator>();
	}

	void Update() {
		float xMove = Input.GetAxis("Horizontal") * Time.deltaTime * StrafeSpeed;
		transform.Translate(xMove, 0f, 0f);
		if (transform.position.x > 4) {
			transform.Translate(4f - transform.position.x, 0, 0);
		} else if (transform.position.x < -4) {
			transform.Translate(-4f - transform.position.x, 0, 0);
		
		}

		if (_animator.GetCurrentAnimatorStateInfo(0).IsName("Run")) {
			_jumping = false;
		} else {
			_jumping = true;
		}
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.name == "Powerup(Clone)") {
			_gameControlScript.PowerupCollected();
		} else if (other.gameObject.name == "Obstacle(Clone)" && !_jumping) {
			_gameControlScript.SlowWorldDown();


		}

		Destroy(other.gameObject);
	}
}