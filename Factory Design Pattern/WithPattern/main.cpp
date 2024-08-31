#include <iostream>
#include "Vechile.h"
#include "Factory.h"

using namespace std;

int main(){
    string vechileType="Car";
    Vechile *vechile = Factory::getVechile(vechileType);
    vechile->createVechile();
}