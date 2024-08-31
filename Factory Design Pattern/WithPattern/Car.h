#pragma once

#include <iostream>
#include "Vechile.h"
using namespace std;

class Car: public Vechile{
    public:
        void createVechile(){
            cout<<"Creating Car"<<'\n';
        }
};