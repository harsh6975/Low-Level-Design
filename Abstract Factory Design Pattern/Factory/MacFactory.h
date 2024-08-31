#pragma once

#include <iostream>
#include "MachineFactory.h"
#include "../Button/Button.h"
#include "../Button/MacButton.h"
#include "../TextBox/MacTextBox.h"
#include "../TextBox/TextBox.h"

using namespace std;

class MacFactory: public MachineFactory{
    public:
        Button* createButton() override{
            return new MacButton();
        }

        TextBox* createTextBox() override{
            return new MacTextBox();
        }
};