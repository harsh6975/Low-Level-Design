#pragma once
#include <iostream>
#include "../Observer/NotificationObserver.h"

using namespace std;

class StockObservable{
    public:
        virtual void attach(NotificationObserver *Obj)=0;
        virtual void detach(NotificationObserver *Obj)=0;
        virtual void notify()=0;
        virtual int getStockCount()=0;
};