#pragma once

#include <iostream>
#include "DriverStrategy.h"
using namespace std;


class NormalDrive: public DriveStrategy{
    public:
        void drive() override{
            cout<<"Normal Drive";
        }
};