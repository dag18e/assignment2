//
// Created by Dylan Giesler on 10/3/2019.
//

#include "Jet.h"
#include <ctime>

Jet::Jet() 
{
    numberOfEngines = 1;
    setBrand("Lockheed");
    setModel("F35");
}

Jet::Jet(string brand, string model, string fuelType, int engineAmount = 1)
 {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    numberOfEngines = engineAmount;
}

Jet::~Jet() = default;

int Jet::getNumEngines() 
{
    return numberOfEngines;
}

double Jet::mileageEstimate(double t) 
{
    //seed for RNG
    std::srand((unsigned int)time(0));

    double mileage = rand() % 41 + 60 * t;
    if (fuelType == "Rocket" && numberOfEngines > 2) 
    {
        mileage += mileage * (0.055 * numberOfEngines);
    }
    return mileage;
}

string Jet::toString() 
{
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " + to_string(getNumEngines());
}