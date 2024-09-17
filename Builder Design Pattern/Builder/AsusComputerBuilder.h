#include <iostream>
#include "ComputerBuilder.h"
#include "../Product.h"
using namespace std;

class AsusComputerBuilder : public ComputerBuilder{
    Computer *computer;
    public:
    AsusComputerBuilder(){
        computer = new Computer();
    }
    void buildKeyboard(){
        string name = "Asus Keyboard";
        computer->setKeyboard(name);
    }
    void buildMouse(){
        string name = "Asus Mouse";
        computer->setMouse(name);
    }
    void buildKeyCpu(){
        string name = "Asus CPU";
        computer->setCpu(name);
    }
    void buildRam(){
        string name = "Asus Ram";
        computer->setRam(name);
    }
    void buildStorage(){
        string name = "Asus Storage";
        computer->setStorage(name);
    }
    Computer* getComputer(){
        return computer;
    }
};

