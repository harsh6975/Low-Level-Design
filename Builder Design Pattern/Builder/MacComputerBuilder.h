#include <iostream>
#include "ComputerBuilder.h"
#include "../Product.h"
using namespace std;

class MacComputerBuilder : public ComputerBuilder{
    Computer *computer;
    public:
    MacComputerBuilder(){
        computer = new Computer();
    }
    void buildKeyboard(){
        string name = "Mac Keyboard";
        computer->setKeyboard(name);
    }
    void buildMouse(){
        string name = "Mac Mouse";
        computer->setMouse(name);
    }
    void buildKeyCpu(){
        string name = "Mac CPU";
        computer->setCpu(name);
    }
    void buildRam(){
        string name = "Mac Ram";
        computer->setRam(name);
    }
    void buildStorage(){
        string name = "Mac Storage";
        computer->setStorage(name);
    }
     Computer* getComputer(){
        return computer;
    }
};

