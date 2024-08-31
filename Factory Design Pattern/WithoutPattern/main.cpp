#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Vechile.h"

using namespace std;

int main(){
    string vechileType="Car";
    // cin>>vechileType;
    Vechile *vechile;

    // user has to take care of implementation 
    // if 100s of class then user has to do every time and compile

    if(vechileType=="Car"){
        vechile = new Car();
    }else if(vechileType == "Bus"){
        vechile = new Bus();
    }
    vechile->createVechile();
}