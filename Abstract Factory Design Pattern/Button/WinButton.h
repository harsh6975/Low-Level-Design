#pragma once

#include <iostream>
#include "Button.h"
using namespace std;

class WinButton: public Button{
    public:
        void press() override{
            cout<<"Windows Button"<<'\n';
        };
};