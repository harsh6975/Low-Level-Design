#include <iostream>
#include "Logger.h"
using namespace std;


class InfoLog: public Logger{
    protected:
        bool canHandle(string loggerType) override{
            if(loggerType=="Info"){
                return true;
            }
            return false;
        }
        void writeLog(string msg) override {
            cout<<"Info log: "<<msg<<'\n';
        }
};