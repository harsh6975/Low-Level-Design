#pragma once

#include <iostream>
#include "../Product.h"
using namespace std;

class ComputerBuilder{
    public:
    virtual void buildKeyboard()=0;
    virtual void buildMouse()=0;
    virtual void buildKeyCpu()=0;
    virtual void buildRam()=0;
    virtual void buildStorage()=0;
    virtual Computer* getComputer() = 0;
};