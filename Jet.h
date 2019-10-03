//
// Created by Dylan Giesler on 10/3/2019.
//

#ifndef DRIVINGSIMULATOR_CAR_H
#define DRIVINGSIMULATOR_CAR_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {
public:
    Jet();

    explicit Jet(string brand, string model, string fuelType, int engineAmount = 1);

    virtual ~Jet();
    int getNumEngines();
    virtual double mileageEstimate(double t);
    virtual string toString();

private:
    int numberOfEngines;
};


#endif