#ifndef Main_h
#define Main_h

#include "q.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User
{
private:
    string teamName, password;

public:
    User(string _username, string _password);
    string getUsername();
    string getPassword();
};

class UserManager
{
private:
    vector<User> users;

public:
void registerUser();
bool loginUser(string username, string password);
void showUserList();
void searchUser(string username);
void deleteUser(string username);
void tryQueue(){
    int a = 1111111;
    QueueL myQueue;
    myQueue.enqueue(a);
    int b;
    myQueue.dequeue(b);
    cout<<b;
}
};
#include "header.cpp"
#endif /* Main_h */