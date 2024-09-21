#include <iostream>
#include "UserManagement.h"
#include "User.h"
#include "Employee.h"
using namespace std;

class EmployeeProxy: public UserManagement{
    Employee *employee;
    public:
    EmployeeProxy(Employee *employee):employee(employee){}

    void createUser(string userType, User *user) override{
       if(userType == "Admin"){
        employee->createUser(userType, user);
       }else{
        cout<<"Only admin can create user"<<'\n';;
       }
    }

    void deleteUser(string userType, int id) override {
        if(userType == "Admin"){
        employee->deleteUser(userType, id);
       }else{
        cout<<"Only admin can delete a user"<<'\n';;
       }
    }

    User* getUser(string userType, int id) override {
        if(userType == "Admin"){
        return employee->getUser(userType, id);
       }
        cout<<"Only admin can get a user"<<'\n';;
        return nullptr;
    }

};