#include <iostream>
#include "Builder/ComputerBuilder.h"
#include "Product.h"
using namespace std;


class Director{
    ComputerBuilder *computerBuilder;
    public:
    Director(ComputerBuilder *computerBuilder): computerBuilder(computerBuilder){};
    Computer* build(){
        computerBuilder->buildKeyboard();
        computerBuilder->buildMouse();
        computerBuilder->buildKeyCpu();
        computerBuilder->buildRam();
        computerBuilder->buildStorage();
        return computerBuilder->getComputer();
    }
};