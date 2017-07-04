using UnityEngine;




public class TriggerZoneScript : MonoBehaviour
{

	//Sletter hinder eller kuler; 

	void OnTriggerEnter(Collider other) {
		if (other.tag == "explode" || other.tag == "collect") {
			Destroy(other.gameObject);
		}
	}
}
