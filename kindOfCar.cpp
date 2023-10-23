#include "kindOfCar.h"
#include <iostream>

// pickUpCar class
PickUpCar::PickUpCar() {
	chassisMass = 1700; // in kg
	maxEngineHorsePower = 500;
	minEngineHorsePower = 200;
}
int PickUpCar::get_chassisMass() const { return chassisMass; }
int PickUpCar::get_maxEngineHorsePower() const { return maxEngineHorsePower; }
int PickUpCar::get_minEngineHorsePower() const { return minEngineHorsePower; }

// RaceCar class
RaceCar::RaceCar() {
	chassisMass = 700; // in kg
	maxEngineHorsePower = 800;
	minEngineHorsePower = 500;
}
int RaceCar::get_chassisMass() const { return chassisMass; }
int RaceCar::get_maxEngineHorsePower() const { return maxEngineHorsePower; }
int RaceCar::get_minEngineHorsePower() const { return minEngineHorsePower; }
