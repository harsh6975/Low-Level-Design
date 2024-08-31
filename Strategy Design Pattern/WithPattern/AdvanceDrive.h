#pragma once

#include <iostream>
#include "DriverStrategy.h"
using namespace std;

class AdvanceDrive: public DriveStrategy{
    public:
        void drive() override{
            cout<<"Advance Drive";
        }
};