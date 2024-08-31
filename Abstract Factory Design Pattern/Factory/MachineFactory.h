#pragma once
#include <iostream>
#include "../Button/Button.h"
#include "../TextBox/TextBox.h"

using namespace std;

class MachineFactory{
    public:
        virtual Button* createButton()=0;
        virtual TextBox* createTextBox()=0;
};