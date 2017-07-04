using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class menuScript : MonoBehaviour {

	// Use this for initialization
	public GameObject playButtonSound;
	public GameObject gameOverScreen;

	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		exitGame ();
	}

	//Laster neste scene
	public void playGAme(){
		 
		SceneManager.LoadScene ("roboSpaceRun");

	} 

	public void backToMenu(){
		SceneManager.LoadScene ("mainMenu");
	}

	//Kommer når appen lanserers på IOS
	public void rateGame(){
		Application.OpenURL("market://details?id=YOUR_APP_ID");
	}

	//Lukker spillet
	 void exitGame(){
		if (Input.GetKeyDown("escape")){

			Application.Quit ();
		}
	}

}
