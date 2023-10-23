#include "Car.h"

template <typename EngineType, typename kindOfCarType, typename typeMassValue>
Car<EngineType, kindOfCarType, typeMassValue>::Car(typeMassValue massEngine) : engine(massEngine)
{
	kindOfCar;
	carMass = kindOfCar.get_chassisMass() + static_cast<int>(engine.get_EngineMass());
	MaxSpeed = engine.get_HorsePower() / 2.5;
	price = engine.get_HorsePower() * 500;
}

template <typename EngineType, typename kindOfCarType, typename typeMassValue>
int Car<EngineType, kindOfCarType, typeMassValue>::get_carMass() const { return carMass; }

template <typename EngineType, typename kindOfCarType, typename typeMassValue> 
int Car<EngineType, kindOfCarType, typeMassValue>::get_MaxSpeed() const { return MaxSpeed; }

template <typename EngineType, typename kindOfCarType, typename typeMassValue>
int Car<EngineType, kindOfCarType, typeMassValue>::get_price() const { return price; }

