using UnityEngine;
using UnityEngine.UI;


public class SpawnObjectsScript : MonoBehaviour
{
	public GameObject ObstaclePrefab;
	public GameObject PowerupPrefab;
	public GameObject BatteryPowerUp;
	public GameObject soundSFXPowerUp;
	public GameObject shield;
	public Light inGameLight; 
	public Text gameScore; 


	public float SpawnCycle = 0.5f; 
	private float _timeElapsed;
	private bool _spawnPowerup = true;


	void Start(){

		inGameLight.GetComponent<Light> (); 

		inGameLight.color = Color.white;
	}


	void Update() {   

		speedUp (); 

		spawnObjects ();
		
	
	} 


	//Funksjon som gjør spillet vanskligere; 

	void speedUp(){

		inGameLight.GetComponent<Light> ();

		if (gameScore.text == "10") {


			SpawnCycle = 0.4f;
			soundSFXPowerUp.GetComponent<AudioSource> ().Play ();
			inGameLight.color = Color.green;


		} else if (gameScore.text == "30") {
			SpawnCycle = 0.3f;
			soundSFXPowerUp.GetComponent<AudioSource> ().Play ();
			inGameLight.GetComponent<Light> (); 

			inGameLight.color = Color.yellow;


		} else if (gameScore.text == "50") {
			SpawnCycle = 0.2f;
			soundSFXPowerUp.GetComponent<AudioSource> ().Play (); 

			inGameLight.color = Color.blue;

		} else if (gameScore.text == "60") {
			SpawnCycle = 0.15f;
			soundSFXPowerUp.GetComponent<AudioSource> ().Play ();
			inGameLight.color = Color.red;

		}
	 
	} 


	void spawnObjects(){
		
		// Kode som genererer objekter


		_timeElapsed += Time.deltaTime;  

		if (_timeElapsed > SpawnCycle) {
			GameObject objectSpawned;
			if (_spawnPowerup) {
				objectSpawned = Instantiate(PowerupPrefab);
			} else {
				objectSpawned = Instantiate (ObstaclePrefab);

			} if (gameScore.text == "5" || gameScore.text == "60") {
				  objectSpawned = Instantiate (BatteryPowerUp);

			}
				

			Vector3 pos = objectSpawned.transform.position;
			objectSpawned.transform.position = new Vector3(Random.Range(-4, 4), pos.y, pos.z);

			_timeElapsed -= SpawnCycle;
			_spawnPowerup = !_spawnPowerup;
		}

	}

}
