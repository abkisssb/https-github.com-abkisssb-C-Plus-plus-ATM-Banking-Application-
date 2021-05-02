// ATM Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::cin;

//LOGIN AND MENU
void login() {

    int userPin = 1234, Pin, errCounter = 0, attempt;

    cout << "You have 3 Login Attempts" << endl;

    do {
        cout << "Enter PIN :";
        cin >> Pin;
        system("cls");

        if (Pin != userPin)
            errCounter++;
        attempt = errCounter;
        cout << "attempt : " << attempt << endl;


    } while (errCounter < 3 && Pin != userPin);


    if (errCounter < 3) {
            cout << "              Welcome BBT Bank" << endl;

            cout << "           BBT-Bank " << endl;

   

            cout << "********************MENU*****************" << endl;
            cout << "*>> 1. Check Balance                      *" << endl;
            cout << "*                                         *" << endl;
            cout << "*>> 2. Withdraw Amount                    *" << endl;
            cout << "*                                         *" << endl;
            cout << "*>> 3. Deposite Amount                    *" << endl;
            cout << "*                                         *" << endl;
            cout << "*>> 4. Transfer Amount                    *" << endl;
            cout << "*                                         *" << endl;
            cout << "*>> 5. Exit                               *" << endl;
            cout << "******************************************" << endl;
        }
        else {
            cout << "Blocked" << endl;
        }




    

}

//Main Method

int main() {


    login();
    

    system("pause");

}
