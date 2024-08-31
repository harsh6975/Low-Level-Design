#include <iostream>
#include "Vechile.h";

using namespace std;

class MotorCycle: public Vechile{
    public:
        int drive(){
            // some logic
            // it is overrding the parent function
            cout<<"Advance drive from MotorCycle class";
        }

};