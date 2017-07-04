using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BatteryScript : MonoBehaviour {

	public GameObject fullBattery;
	public GameObject battery9;
	public GameObject battery8;
	public GameObject battery7;
	public GameObject battery6;
	public GameObject battery5;
	public GameObject battery4;
	public GameObject batteryEmpty; 
	public GameObject kyleShield;
	public GameObject shieldSound;
	public GameObject shieldCoolDown;
	public GameObject BatteryLowSFX;



	public float timeLeft;


	// Use this for initialization
	void Start () { 

		allActive ();


	}

	// Update is called once per frame
	void Update () {
		 


		emptyBattery ();

		if (timeLeft <= 4 && Input.GetMouseButton(0)) {
			timeLeft -= Time.deltaTime;
			batteryUsage ();
		}


	}
		

	void OnTriggerEnter(Collider other){



		if (other.tag == "battery") {
			
			allActive ();

		}

	}
		

	//Kode som tømmer batteriet.

	void batteryUsage ()
	{


		if (timeLeft <= 3.8) {
			fullBattery.SetActive (false); 

		}
		if (timeLeft <= 3.2) {
			battery9.SetActive (false);

		}
		if (timeLeft <= 2.5) {
			battery8.SetActive (false);

		}
		if (timeLeft <= 2.0) {
			battery7.SetActive (false); 

		}
		if (timeLeft <= 1.6) {
			battery6.SetActive (false);

		}
		if (timeLeft <= 1.3) {
			battery5.SetActive (false);

		}
		if (timeLeft <= 0.4) { 
			battery4.SetActive (false);

		}
	}





	void emptyBattery(){		



		if (timeLeft <= 0 && Input.GetMouseButton (0)) {

		
			kyleShield.SetActive (false);
			shieldSound.SetActive (false);
			shieldCoolDown.SetActive (false);


		}

		if (Input.GetMouseButtonDown (0) && timeLeft <= 0) {
			BatteryLowSFX.GetComponent<AudioSource> ().Play ();
			kyleShield.SetActive (false);

		} 

	}

	void allActive(){

		timeLeft = 4.0f;

		batteryEmpty.SetActive (true);
		battery4.SetActive (true);
		battery5.SetActive (true);
		battery6.SetActive (true);
		battery7.SetActive (true);
		battery9.SetActive (true);
		fullBattery.SetActive (true);

	} 



}



