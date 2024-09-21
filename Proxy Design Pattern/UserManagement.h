#pragma once


#include <iostream>
#include "User.h"

using namespace std;

class UserManagement{
    public:
    virtual void createUser(string type, User *emp)=0;
    virtual void deleteUser(string type, int employeeId)=0;
    virtual User *getUser(string type, int employeeId)=0;
};