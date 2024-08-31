#pragma once

#include <iostream>
#include "Button.h"
using namespace std;

class MacButton: public Button{
    public:
        void press() override{
            cout<<"Mac Button"<<'\n';
        };
};