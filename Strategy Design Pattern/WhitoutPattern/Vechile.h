#include <iostream>

using namespace std;

class Vechile{
    public:
        int noOfTires;
        string brakeType;
        string color;
        string fuelType;

        Vechile(int noOfTires, string brakeType, string color, string fuelType){
            this->noOfTires = noOfTires;
            this->brakeType = brakeType;
            this->color = color;
            this->fuelType = fuelType;
        }

        int getNoOfTires(){
            return this->noOfTires;
        }

        int drive(){
            // some logic;
            cout<<"Simple drive from Vechile class";
        }

};
