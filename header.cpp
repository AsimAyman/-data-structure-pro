#include "header.h"
User::User(string _username, string _password)
    {
        teamName = _username;
        password = _password;
    }
string User::getUsername(){
        return teamName;
    }
string User::getPassword(){
        return password;}
//********************* 
void UserManager::registerUser()
    {
        tryQueue();
        string username, password;
        cout << "\t\tEnter Username: ";
        cin >> username;
        cout << "\t\tEnter Password: ";
        cin >> password;
        User newUser(username, password);
        users.push_back(newUser);

        cout << "\t\t" << username << " has been registered successfully!" << endl;
    }
 bool UserManager::loginUser(string username, string password)
    {
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getUsername() == username && users[i].getPassword() == password)
            {
                cout << "\t\t" << username << " has been logged in successfully!" << endl;
                return true;
            }
        }
        cout << "\t\tInvalid username or password!" << endl;
        return false;
    }    
void UserManager::showUserList(){
        cout << "\t\tUser List" << endl;
        cout << "\t\t=========" << endl;
        for (int i = 0; i < users.size(); i++)
        {
            cout << "\t\t" << i << ". " << users[i].getUsername() << endl;
        }
    }
    

void UserManager::searchUser(string username)
    {
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getUsername() == username)
            {
                cout << "\t\t" << username << " has been found!" << endl;
                return;
            }
        }
        cout << "\t\t" << username << " has not been found!" << endl;
    }

void UserManager::deleteUser(string username){
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getUsername() == username)
            {
                users.erase(users.begin() + i);
                cout << "\t\t" << username << " has been deleted!" << endl;
                return;
            }
        }
        cout << "\t\t" << username << " has not been found!" << endl;
    }
