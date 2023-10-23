#pragma once
#include <iostream>
#include "kindOfCar.h"
#include "kindOfEngines.h"
#include "kinfOfEngines.inl"

template <typename EngineType, typename kindOfCarType, typename typeMassValue>
class Car
{
public:
	Car(typeMassValue massEngine);
	~Car() {};
	int get_carMass() const;
	int get_MaxSpeed() const;
	int get_price() const;
private:
	EngineType engine;
	kindOfCarType kindOfCar;
	int carMass;
	int MaxSpeed;
	int price;
};

