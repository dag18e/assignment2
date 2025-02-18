//
// Created by Dylan Giesler on 10/3/2019.
//

#ifndef DRIVINGSIMULATOR_HELICOPTER_H
#define DRIVINGSIMULATOR_HELICOPTER_H

#include "PoweredVehicle.h"

class Helicopter : public PoweredVehicle {
public:
    Helicopter();

    explicit Helicopter(string brand, string model, string fuelType, int engineAmount = 1, int bladeAmount = 3, int rotorAmount = 1);

    virtual ~Helicopter();
    int getNumEngines();
    int getNumBlades();
    int getNumRotors();
    virtual double mileageEstimate(double t);
    virtual string toString();

private:
    int numberOfEngines;
    int numberOfBlades;
    int numberOfRotors;
};


#endif