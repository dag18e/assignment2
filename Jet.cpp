//
// Created by Esteban Parra on 9/5/19.
//

#include "Jet.h"
#include <ctime>

Jet::Jet() 
{
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
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

}

string Jet::toString() 
{
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " + to_string(getNumEngines());
}