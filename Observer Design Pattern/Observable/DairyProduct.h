
#pragma once
#include <iostream>
#include "StockObservable.h"
#include <vector>
#include "../Observer/NotificationObserver.h"

class DairyProduct: public StockObservable
{
    private:
        vector<NotificationObserver*> observers;
        int quantity;
    public:

        DairyProduct(){
            quantity=0;
        }

        void attach(NotificationObserver *obj) override{
            observers.push_back(obj);
        }

        void detach(NotificationObserver *obj) override{
            observers.erase(remove(observers.begin(), observers.end(), obj), observers.end());
        }

        void notify() override{
            for(auto obs:observers){
                obs->notify("Dairy products are in stock");
                obs->notifyWithoutParameter();
            }
        }

        void addStock(int n){
            if(quantity==0){
                notify();
            }
            quantity+=n;
        }

        void removeStock(int n){
           quantity-=n;
        }

        int getStockCount() override{
            return quantity;
        }

};

