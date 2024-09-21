#include <iostream>
#include "UserManagement.h"
#include "User.h"
#include "Employee.h"
#include "EmployeeProxy.h"

using namespace std;


int main(){
    User *user = new User("Harsh", 1);
    Employee *emp = new Employee();
    UserManagement *mgmt = new EmployeeProxy(emp);

    mgmt->createUser("Admin", user);
    mgmt->createUser("Employeee", user);
    mgmt->deleteUser("Admin", 1);

}