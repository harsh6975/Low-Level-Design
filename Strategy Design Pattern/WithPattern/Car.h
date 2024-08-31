#pragma once

#include <iostream>
#include "Vechile.h"
using namespace std;


class Car: public Vechile{
    public:
        Car(int noOfTires, string brakeType, string color, string fuelType, DriveStrategy *driveObj) : Vechile(noOfTires, brakeType,color,fuelType, driveObj){

        }
};