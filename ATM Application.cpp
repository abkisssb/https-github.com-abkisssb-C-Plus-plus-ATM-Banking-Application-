// ATM Application.cpp : This file contains the 'main' function. Program execution begins and ends there.

 
#include <iostream>
#include <string>
#include <ctime>  




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
        cout << "login attempt : " << attempt << endl;
        cout << endl;


    } while (errCounter < 3 && Pin != userPin);


    if (errCounter < 3) {
        cout << "              Welcome BBT Bank" << endl;
        

    }
    else {
        cout << "Blocked! Contact Customer Support for help" << endl;
    }
    

}

void menu() {

    cout << "              Welcome BBT Bank" << endl;
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
//Class Bank
class Bank {

private:
    int accountNumber = 87659110;
    long accountBalance = 17500;
    string accountName = "Abiola Rashidi";
   

public:
    //CHECK BALANCE
    void checkBalance() {

        cout << "Account Balance : " << accountBalance << "$" << endl;

    }
    //WITHDRAWL
    void withDraw() {

        long withdraw;
        cout << "Enter Amount to withdraw :";
        cin >> withdraw;
        system("cls");
        if (withdraw <= accountBalance) {
            accountBalance -= withdraw;
            withdraw = withdraw;
            cout << "Amount Withdrawn: " << withdraw << "$" << endl;
            cout << "Account Balance :" << accountBalance << "$" << endl;
        }
        else {
            cout << "Insufficient Balance!"<<endl;

        }
    }
    //DEPOSIT
    void deposit() {

        long deposite;
        cout << "Enter Amount to Deposite :";
        cin >> deposite;
        system("cls"); 
        accountBalance += deposite;
        deposite = deposite;
        cout << "Account Deposited :" << deposite << "$" << endl;
        cout << "Account Balance :" << accountBalance << "$" << endl;
        //system("cls");
    }
    //TRANSFER
    void transfer() {

        string name;
        int accountNo;
        double transfer;

        cout << "Enter Name of Reciever :" << endl;
        cin.ignore();
        getline(cin, name);

        cout << "Enter Account No. of Reciever :" << endl;
        cin >> accountNo;

        cout << "Enter Amount to tranfer :" << endl;
        cin >> transfer;

        if (transfer > accountBalance) {
            cout << "Insufficient Balance :" << endl;

        }
        else {

            accountBalance = accountBalance - transfer;
            transfer = transfer;
            //system("cls");
            cout << transfer << "$" << " has been transfered to " << name << endl;

        }
    }
    
    //DISPLAY MENU
    void display() {
        

        cout << " >>>> Account Information <<<< "<< endl;
        cout << "Account Name : " << accountName<< endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Balance : " << accountBalance << " $"<< endl;
        cout << "********************************************"<<endl;

    }

    

   
    
};


//MAIN METHOD

int main() {

    Bank bank; // Create Object of Class Bank
    int option; // Option to select Menu
    login();    // Login function call
    bank.display(); // accessing bank object
 
    
    do {

        menu();

        //To Ask Users for  what they want to do.
        cout << "Enter Option :";
        cin >> option;
        system("cls");

        switch (option) {

            //To Check Account Balance.
        case 1:
            bank.checkBalance(); break;

            //To Withdraw Amount.
        case 2:
            bank.withDraw(); break;

            //To Make Deposite.
        case 3:
            bank.deposit(); break;
            //system("cls");

            //To Transfer.
        case 4:
            bank.transfer(); break;

            //To Exit


        }


    } while (option != 5);
    return 0;

    
    system("pause");
}
    
