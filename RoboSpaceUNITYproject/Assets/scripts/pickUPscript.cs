using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class pickUPscript : MonoBehaviour {

	public GameObject soundSFX;
	public GameObject ps;
	public GameObject ps1;
	public GameObject ps2;
	public GameObject rebootGame;
	public GameObject soundSFXPowerUp;
	public GameObject kyle; 
	public GameObject explosion;
	public GameObject shield;
	public GameObject batteryFullSFX;
	public Text gameScore;
	public Text gameScoreGameOver;
	public Text HighScore;




	private int _score;
	public float timeLeft;


	// Use this for initialization
	void Start () {
		
		//Kode som tvinger 60fps på IOS enheter.
		//Ios kjører default 30fps for å spare på batteri.

		Application.targetFrameRate = 60;
		
	}
	
	// Update is called once per frame

	void Update () {
		
		//Setter en tid når man trykker på skjerm/mus

		if(Input.GetMouseButton(0)){
			timeLeft -= Time.deltaTime;

		}

	

	}	
		
 
	//Hva som skjer når Kyle fanger de blå kulene, eller treffer de røde hindrene. 

	void OnTriggerEnter (Collider other){


		if (other.tag == "collect") {

			pickUp ();

		}

		if (other.tag == "battery") {

			pickUpBattery (); 

			timeLeft = 4;

		}

			//RoboKyle treffer hinder med, eller uten powerup. 
	 
			
		if (other.tag == "explode" && !Input.GetMouseButton(0) || other.tag == "explode" && timeLeft <= 0 && Input.GetMouseButton(0)) {
			
			dead ();


		}
			
			

	}  

	//Funksjon som dreper Kyle.

	void dead(){
		    
			Instantiate (ps1, transform.position, Quaternion.identity);
			rebootGame.SetActive (true); 
			Destroy (kyle);
			explosion.GetComponent<AudioSource> ().Play ();
			gameScoreGameOver.text = _score.ToString ();
			HighScore.text = _score.ToString ();
			int bestScore = PlayerPrefs.GetInt ("bestScore", 0);


			//Setter HighScore etter "GameOver"

			if (_score > bestScore){

				PlayerPrefs.SetInt ("bestScore", _score);

			} 

			HighScore.text = PlayerPrefs.GetInt ("bestScore", 0).ToString ();

		}



	//Funksjon som gir poeng når man treffer "Blue Hexa Sphere"
	void pickUp(){

		soundSFX.GetComponent<AudioSource> ().Play ();
		Instantiate (ps, transform.position, Quaternion.identity);
		_score++;
		gameScore.text = _score.ToString ();

	}

	//Funksjon som fyllerBatteriet når man treffer "Green Hexa Sphere"
	void pickUpBattery(){
		
		soundSFX.GetComponent<AudioSource> ().Play ();
		batteryFullSFX.GetComponent<AudioSource> ().Play ();
		Instantiate (ps2, transform.position, Quaternion.identity);


	}
}








 	



	

 











