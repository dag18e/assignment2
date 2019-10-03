//
// Created by Dylan Giesler on 10/3/2019.
//

#include "Helicopter.h"
#include <ctime>

Helicopter::Helicopter() 
{
    numberOfEngines = 1;
    numberOfBlades = 4;
    numberOfRotors = 1;
    setBrand("Boeing");
    setModel("Apache");
}

Helicopter::Helicopter(string brand, string model, string fuelType, int engineAmount = 1, int bladeAmount = 3, int rotorAmount = 1)
 {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    numberOfEngines = engineAmount;
    numberOfBlades = bladeAmount;
    numberOfRotors = rotorAmount;
}

Helicopter::~Helicopter() = default;

int Helicopter::getNumEngines() 
{
    return numberOfEngines;
}

int Helicopter::getNumBlades()
{
    return numberOfBlades;
}

int Helicopter::getNumRotors()
{
    return numberOfRotors;
}

double Helicopter::mileageEstimate(double t) 
{
    //seed for RNG
    std::srand((unsigned int)time(0));

    double mileage = rand() % 21 + 30 * t;

    //special case for special fuel and special 
    if (fuelType == "GoGoJuice" && numberOfBlades < 6) 
    {
        mileage += mileage * (0.55 * numberOfEngines);
    }
    return mileage;
}

string Helicopter::toString() 
{
    return "-> Helicopter\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " + to_string(getNumEngines()) + 
           "\n\tNumber of blades: " + to_string(getNumBlades()) + "\n\tNumber of rotors: " + to_string(getNumRotors());
}