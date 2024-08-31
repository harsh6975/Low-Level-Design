#include <iostream>
#include "Singleton.h"
using namespace std;

Singleton *Singleton :: instance = nullptr;
int Singleton::noOfTIimesConstructorCalled=0;

int main(){
    Singleton *instance1 = Singleton::getInstance();
    instance1->printMsg("This is msg from instance 1");

    Singleton *instance2 = Singleton::getInstance();
    instance2->printMsg("This is msg from instance 2");
}