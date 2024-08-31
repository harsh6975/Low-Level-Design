#include <iostream>
#include "Observable/DairyProduct.h"
#include "Observable/MobilePhone.h"
#include "Observer/User.h"

using namespace std;

int main(){
    DairyProduct *dairy = new DairyProduct();
    MobilePhone *mobile = new MobilePhone();
    NotificationObserver *user1 = new User("Harsh", 1, dairy);
    NotificationObserver *user2 = new User("Sinha", 1, mobile);
    NotificationObserver *user3 = new User("Nayan", 1, dairy);
    NotificationObserver *user4 = new User("Tanya", 1, dairy);
    NotificationObserver *user5 = new User("Srivastava", 1, mobile);

    dairy->addStock(3);
    mobile->addStock(5);
    dairy->detach(user3);
    dairy->removeStock(3);
    dairy->addStock(1);
}