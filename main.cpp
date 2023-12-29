#include "header.h"
#include "q.h"
void userConsole(UserManager userManager){
        char ch;
    do
    {
        system("clear");
        int op;
        
        cout << "\t\t================================" << endl;
        cout << "\t\tWelcome to Team Management System" << endl;
        cout << "\t\t1. Register User" << endl;
        cout << "\t\t2. Login" << endl;
        cout << "\t\t3. Show Team List" << endl;
        cout << "\t\t4. Search Team" << endl;
        cout << "\t\t5. Delete Team" << endl;
        cout << "\t\t6. Exit" << endl;
        cout << "\t\t================================" << endl;
        cout << "\t\tEnter your option: ";
        cin >> op;
        switch (op)
        {
        case 1:
        {
            userManager.registerUser();
            break;
        }

        case 2:
        {
            string username, password;
            cout << "\t\tEnter Username: ";
            cin >> username;
            cout << "\t\tEnter Password: ";
            cin >> password;
            userManager.loginUser(username, password);
            break;
        }

        case 3:
        {
            userManager.showUserList();
            break;
        }

        case 4:
        {
            string username;
            cout << "\t\tEnter Username: ";
            cin >> username;
            userManager.searchUser(username);
            break;
        }
        case 5:
        {
            string username;
            cout << "\t\tEnter Username: ";
            cin >> username;
            userManager.deleteUser(username);
            break;
        }
        case 6:
        {
            cout << "\t\tThank you for using User Management System!" << endl;
            exit(0);
        }
        default:
            break;
         }
        cout << "\t\tDo you want to continue? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}
int main(){
    UserManager userManager;
    userConsole(userManager);
    return 0;
}