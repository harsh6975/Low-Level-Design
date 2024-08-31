#include <iostream>
#include "NotificationObserver.h"
#include "../Observable/StockObservable.h"

using namespace std;


class User: public NotificationObserver
{
    private:
        string name;
        int userId;
        StockObservable *observable;
    public:

        User(string name,int userId, StockObservable *observable):name(name),userId(userId),observable(observable){
            observable->attach(this);
        }

        void notify(string msg) override{
            cout<<"Notification for "<<name<<": "<<msg<<'\n';
        }

        void notifyWithoutParameter() override{
            int stockCount = observable->getStockCount();
            if(stockCount){
                cout<<"Notification for "<<name<<": "<<"total stock "<<stockCount<<'\n';
            }
        }
};


