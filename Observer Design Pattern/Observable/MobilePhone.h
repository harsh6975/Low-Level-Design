
#pragma once
#include <iostream>
#include "StockObservable.h"
#include <vector>
#include "../Observer/NotificationObserver.h"

class MobilePhone: public StockObservable
{
    private:
        vector<NotificationObserver*> observers;
        int quantity;
    public:

        MobilePhone(){
            quantity = 0;
        }

        void attach(NotificationObserver *obj) override{
            observers.push_back(obj);
        }

        void detach(NotificationObserver *obj) override{
            observers.erase(remove(observers.begin(), observers.end(), obj), observers.end());
        }

        void notify() override{
            for(auto obs:observers){
                obs->notify("Mobile phone are in stock");
                obs->notifyWithoutParameter();
            }
        }

        void addStock(int n){
            quantity+=n;
            if(quantity-n==0){
                notify();
            }
            
        }

        void removeStock(int n){
            quantity-=n;
        }

        int getStockCount() override{
            return quantity;
        }

};

