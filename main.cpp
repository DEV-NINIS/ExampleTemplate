#include <iostream>
#include "Car.h"
#include "Car.inl"
#include "kindOfCar.h"
#include "kindOfEngines.h"

int main()
{
	int massEngine = 400;
	
	Car<Engine800HorsePower<int>, RaceCar, int> myCar(massEngine);
	Car<Engine500HorsePower<float>, PickUpCar, float> mySecondCar(massEngine * 2);


	std::cout << " max speed :" << myCar.get_MaxSpeed() << " km/h" << std::endl;
	std::cout << " price of the car :" << myCar.get_price() << " $" << std::endl;

	std::cout << " max speed :" << mySecondCar.get_MaxSpeed() << " km/h" << std::endl;
	std::cout << " price of the car :" << mySecondCar.get_price() << " $" << std::endl;

}