#include <iostream>
#include "Builder/AsusComputerBuilder.h"
#include "Builder/MacComputerBuilder.h"
#include "Builder/ComputerBuilder.h"
#include "Director.h"


using namespace std;

int main(){
    AsusComputerBuilder* asusComputer = new AsusComputerBuilder();
    MacComputerBuilder* macComputer = new MacComputerBuilder();

    Director *director1 = new Director(asusComputer);
    Director *director2 = new Director(macComputer);

    Computer *asusComputer1 = director1->build();
    Computer *macComputer1 = director2->build();

    asusComputer1->showSpec();
    macComputer1->showSpec();
}