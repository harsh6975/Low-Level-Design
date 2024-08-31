#pragma once

#include <iostream>

#include "Vechile.h"
using namespace std;

class Bus: public Vechile{
    public:
        void createVechile(){
            cout<<"Creating Bus"<<'\n';
        }
};