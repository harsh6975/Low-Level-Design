#include <iostream>
#include "Logger.h"
using namespace std;


class ErrorLog: public Logger{
    protected:
        bool canHandle(string loggerType) override{
            if(loggerType=="Error"){
                return true;
            }
            return false;
        }
        void writeLog(string msg) override {
            cout<<"Error log: "<<msg<<'\n';
        }
};