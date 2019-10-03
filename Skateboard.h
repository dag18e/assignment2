//
// Created by Dylan Giesler on 10/3/2019.
//

#ifndef DRIVINGSIMULATOR_Skateboard_H
#define DRIVINGSIMULATOR_Skateboard_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:
    int myGearCount;

public:
    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif