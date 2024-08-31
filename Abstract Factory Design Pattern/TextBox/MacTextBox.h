#pragma once

#include <iostream>
#include "TextBox.h"
using namespace std;

class MacTextBox: public TextBox{
    public:
        void showText() override{
            cout<<"Mac TextBox"<<'\n';
        };
};