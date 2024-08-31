#pragma once

#include <iostream>
#include "Factory/WinFactory.h"
#include "Factory/MacFactory.h"
#include "Factory/MachineFactory.h"


using namespace std;

class AbstractFactory{
    public:
        static MachineFactory* createFactory(string type){
            if(type=="Mac")return new MacFactory();
            return new WinFactory();
        }
};