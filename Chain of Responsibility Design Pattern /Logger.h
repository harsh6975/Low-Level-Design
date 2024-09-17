#pragma once
#include <iostream>

using namespace std;

class Logger{
    Logger *next;

    protected:
        virtual bool canHandle(string loggerType)=0;
        virtual void writeLog(string msg)=0;

    public:
        Logger():next(nullptr){};
        void setNext(Logger *nextLogger){
            next = nextLogger;
        }
        
        void logMessage(string loggerType, string msg){
            if(canHandle(loggerType)){
                writeLog(msg);
            }else if(next!=nullptr){
                next->logMessage(loggerType,msg);
            }
        }
};