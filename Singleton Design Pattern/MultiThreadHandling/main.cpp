#include <iostream>
#include "Singleton.h"
#include <thread>

using namespace std;

Singleton *Singleton :: instance = nullptr;

int Singleton :: noOfTimesConstructorCalled = 0;

mutex Singleton :: mutex_;

void creteObj1(){
    Singleton *instance1 = Singleton::getInstance();
    instance1->printMsg("This is msg from instance 1");
    
}

void creteObj2(){
    Singleton *instance2 = Singleton::getInstance();
    instance2->printMsg("This is msg from instance 2"); 
}

int main(){

    thread t1(creteObj1);
    thread t2(creteObj2);

    // join is used to wait for the completion of the thread;
    t1.join();
    t2.join();

    cout<<"As we have used join so this will only print after both thread is completed"<<'\n';
    return 0;
}