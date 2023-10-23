#pragma once
#include <iostream>

class PickUpCar
{
public:
	PickUpCar();
	~PickUpCar() {};
	int get_chassisMass() const;
	int get_maxEngineHorsePower() const;
	int get_minEngineHorsePower() const;

private:
	// the maximum number of compatible horses
	int chassisMass;
	int maxEngineHorsePower;
	int minEngineHorsePower;
};

class RaceCar
{
public:
	RaceCar();
	~RaceCar() {};
	int get_chassisMass() const;
	int get_maxEngineHorsePower() const;
	int get_minEngineHorsePower() const;

private:
	// the maximum number of compatible horses
	int chassisMass;
	int maxEngineHorsePower;
	int minEngineHorsePower;
};

