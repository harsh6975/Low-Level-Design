#pragma once

#include <iostream>
#include "UserManagement.h"
#include "User.h"
using namespace std;

class Employee: public UserManagement{
    unordered_map<int,User*> users;
    public:
    void createUser(string userType, User *user) override{
        int userId = user->getId();
        if(users.count(userId)){
            cout<<"User already registerd"<<'\n';
            return;
        }
        users[userId]=user;
        cout<<"User created: "<<user->getName()<<" "<<user->getId()<<'\n';;
    }

    void deleteUser(string userType, int id) override {
        if(!users.count(id)){
            cout<<"No user found"<<'\n';
            return;
        }
        users.erase(id);
        cout<<"User deleted: "<<id<<'\n';;
    }

    User* getUser(string userType, int id) override {
         if(!users.count(id)){
            cout<<"No user found"<<'\n';
            return nullptr;
        }
        cout<<"User found: "<<users[id]->getName()<<" "<<users[id]->getId()<<'\n';
        return users[id];
    }

};