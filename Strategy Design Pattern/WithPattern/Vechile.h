#pragma once

#include <iostream>
// #include "DriverStrategy.h"
using namespace std;

class Vechile{
    public:
        int noOfTires;
        string brakeType;
        string color;
        string fuelType;
        DriveStrategy *driveObj;
        Vechile(int noOfTires, string brakeType, string color, string fuelType, DriveStrategy *driveObj){
            this->noOfTires = noOfTires;
            this->brakeType = brakeType;
            this->color = color;
            this->fuelType = fuelType;
            this->driveObj = driveObj;
        }

        int getNoOfTires(){
            return this->noOfTires;
        }

        void drive(){
            // some logic;
            cout<<"Drive from Vechile class"<<'\n';
            driveObj->drive();
        }

};
