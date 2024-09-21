
#pragma once

#include <iostream>
using namespace std;

class User{
    string name;
    int id;
    public:
    User(string name,int id):name(name),id(id){}
    int getId(){
        return id;
    }

    string getName(){
        return name;
    }
};