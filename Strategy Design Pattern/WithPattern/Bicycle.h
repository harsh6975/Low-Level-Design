#pragma once

#include <iostream>
#include "Vechile.h"
using namespace std;


class Bicycle: public Vechile{
    public:
        Bicycle(int noOfTires, string brakeType, string color, string fuelType, DriveStrategy *driveObj) : Vechile(noOfTires, brakeType,color,fuelType, driveObj){

        }
};