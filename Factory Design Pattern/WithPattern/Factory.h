#include <iostream>
#include "Vechile.h"
#include "Car.h"
#include "Bus.h"
using namespace std;

class Factory{
    public:
        static Vechile* getVechile(string vechileType){
            Vechile *vechile;
            if(vechileType=="Car"){
                vechile = new Car();
            }else if(vechileType == "Bus"){
                vechile = new Bus();
            }
            return vechile;
        }
};