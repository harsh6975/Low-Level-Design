#pragma once

#include <iostream>
#include "MachineFactory.h"
#include "../Button/Button.h"
#include "../TextBox/TextBox.h"
#include "../Button/WinButton.h"
#include "../TextBox/WinTextBox.h"

using namespace std;

class WinFactory: public MachineFactory{
    public:
        Button* createButton() override{
            return new WinButton();
        }

        TextBox* createTextBox() override{
            return new WinTextBox();
        }
};