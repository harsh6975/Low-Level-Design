
#include <iostream>
#include "NormalDrive.h"
#include "AdvanceDrive.h"
#include "MotorCycle.h"
#include "Bicycle.h"
#include "Car.h"

using namespace std;



int main(){
    NormalDrive *normalDrive=new NormalDrive();
    AdvanceDrive *advanceDrive = new AdvanceDrive();
    Vechile *vechile = new MotorCycle(2,"brake", "black", "petrol", advanceDrive);
    cout<<"No of tires: "<<vechile->getNoOfTires()<<'\n';
    cout<<"Drive Type: ";
    vechile->drive();


    Vechile *vechile1 = new Bicycle(2,"brake", "black", "petrol", normalDrive);
    cout<<"No of tires: "<<vechile->getNoOfTires()<<'\n';
    cout<<"Drive Type: ";
    vechile->drive();

    Vechile *vechile3 = new Car(2,"brake", "black", "petrol", advanceDrive);
    cout<<"No of tires: "<<vechile->getNoOfTires()<<'\n';
    cout<<"Drive Type: ";
    vechile->drive();
}