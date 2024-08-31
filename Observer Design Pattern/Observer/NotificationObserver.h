#pragma once
#include <iostream>

using namespace std;

class NotificationObserver{
    public:
       virtual void notify(string msg)=0;
       virtual void notifyWithoutParameter()=0;
};