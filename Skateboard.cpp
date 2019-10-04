//
// Created by Dylan Giesler on 10/3/2019.
//

#include "Skateboard.h"
#include <ctime>

Skateboard::Skateboard() 
{
    setBrand("AdorableBoards");
    setModel("TheCutePuppy");
}

Skateboard::Skateboard(string brand, string model)
 {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;


double Skateboard::mileageEstimate(double t) 
{
    //seed for RNG
    std::srand((unsigned int)time(0));

    double mileage = ((rand() % 5 + 1) / 10.0) * t;
    if (t > 25 && t < 250) 
    {
        mileage += mileage * (rand() % static_cast<int>(t/3) + 1);
    }
    return mileage;
}

string Skateboard::toString() 
{
    return "-> Skateboard\n" + Vehicle::toString();
}