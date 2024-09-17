#pragma once

#include <iostream>

using namespace std;

class Computer{
    string keyboard;
    string mouse;
    string cpu;
    string ram;
    string storage;

public:
    void setKeyboard(string &keyboard){
        this->keyboard = keyboard;
    }
    void setMouse(string &mouse){
        this->mouse = mouse;
    }
    void setCpu(string &cpu){
        this->cpu = cpu;
    }
    void setRam(string &ram){
        this->ram = ram;
    }
    void setStorage(string &storage){
        this->storage = storage;
    }

    void showSpec(){
        cout<<"--------------Specs of computer--------------"<<'\n';
        cout<<"Keyboard: "<<this->keyboard<<'\n';
        cout<<"Mouse: "<<this->mouse<<'\n';
        cout<<"Cpu: "<<this->cpu<<'\n';
        cout<<"Ram: "<<this->ram<<'\n';
        cout<<"Storage: "<<this->storage<<'\n';
        cout<<"----------------------------------------------"<<'\n';
    }
};