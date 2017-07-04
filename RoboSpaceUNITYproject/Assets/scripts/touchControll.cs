using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class touchControll : MonoBehaviour {

	public float tiltSpeed;
	public GameObject shield; 
	public GameObject shieldSFX;
	public GameObject shieldCooldDown;



	// Use this for initialization
	void Start () {


	}

	// Update is called once per frame
	void Update () {

		phoneControlls ();


	
	} 

	void phoneControlls(){

		//Kode som tar i brukt Gyroen på telefonen


		float x = Input.acceleration.x * tiltSpeed * Time.deltaTime;
		float z = -Input.acceleration.x * tiltSpeed * Time.deltaTime;
		transform.Translate (x, 0f, 0f); 

		//Hva som skjer når du holder inne skjerm eller museknapp;
		if (Input.GetMouseButtonDown(0)) {
			shield.SetActive (true);
			shieldSFX.GetComponent<AudioSource> ().Play ();
		
		} 

		//Hva som skjer når du slipper skjerm/museknapp;
		else if (Input.GetMouseButtonUp(0)) { 
			shield.SetActive (false); 
			shieldCooldDown.GetComponent<AudioSource> ().Play ();
		}
	}

}
