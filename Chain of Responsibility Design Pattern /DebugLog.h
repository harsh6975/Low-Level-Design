#include <iostream>
#include "Logger.h"
using namespace std;


class DebugLog: public Logger{
    protected:
        bool canHandle(string loggerType) override{
            if(loggerType=="Debug"){
                return true;
            }
            return false;
        }
        void writeLog(string msg) override {
            cout<<"Debug log: "<<msg<<'\n';
        }
};