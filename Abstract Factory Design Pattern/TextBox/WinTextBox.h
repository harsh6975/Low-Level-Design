#pragma once

#include <iostream>
#include "TextBox.h"
using namespace std;

class WinTextBox: public TextBox{
    public:
        void showText() override{
            cout<<"Windows Text box"<<'\n';
        };
};