#include <iostream>
#include "Logger.h"
#include "DebugLog.h"
#include "InfoLog.h"
#include "ErrorLog.h"

using namespace std;

int main(){
    InfoLog *infoLog = new InfoLog();
    DebugLog *debugLog = new DebugLog();
    ErrorLog *errorLog = new ErrorLog();

    infoLog->setNext(debugLog);
    debugLog->setNext(errorLog);

    Logger *log = infoLog;
    infoLog->logMessage("Info", "This is info msg.");
    infoLog->logMessage("Error", "This is error msg.");
    infoLog->logMessage("Debug", "This is debug msg.");
}