#include <iostream>
#include "AbstractFactory.h"
#include "Factory/MachineFactory.h"

using namespace std;

int main(){
    string type="Win";
    MachineFactory *fact = AbstractFactory::createFactory(type);

    Button * but = fact->createButton();
    but->press();

    TextBox * text = fact->createTextBox();
    text->showText();
}