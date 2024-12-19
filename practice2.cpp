//  Reeham Imam
//  pracrice2.cpp
//  Practice
//  Created by Reeham Imam on 5/31/23.
// Log in system

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int eAge;
int eChoice;
string eName;
string eUsername;
string ePassword;
string eNewPass;
void Menu();
void Register();
void LogIn();
void ChangePassword();
void ErrorCheck();



int main() {
    Menu();
    
    ofstream eList;
   // eList.Open("");
    
    return 0;
}
void Menu(){
    cout << "[-------------------------]" << endl;
    cout << "|   1. Register           |" << endl;
    cout << "|   2. Log In             |" << endl;
    cout << "|   3. Change Password    |" << endl;
    cout << "|   4. Exit               |" << endl;
    cout << "[-------------------------]" << endl;
    cout << "What Can I do for You?" << endl;
    cout << endl;
    cin >> eChoice;
    
    if ( eChoice == 1){
        Register();
    }
    else if ( eChoice == 2){
        LogIn();
    }
    else if ( eChoice == 3){
        ChangePassword();
    }
    else if ( eChoice == 4){
        exit(0);
    }
}

void Register(){
    cout << endl;
    cout << "[-------------------------]" << endl;
    cout << "|        Register         |" << endl;
    cout << "[-------------------------]" << endl;
    cout << "-Name: ";
    cin >> eName;
    cout << "-Username: ";
    cin >> eUsername;
    cout << "-Password: ";
    cin >> ePassword;
    cout << "-Age: ";
    cin >> eAge;
    cout << "[-------------------------]" << endl;
    cout << "|   Account Registered!   |" << endl;
    cout << "[-------------------------]" << endl;
    cout << "  Name: " << eName << endl;
    cout << "  Username: " << eUsername <<  endl;
    cout << "  Age: " << eAge <<  endl;
    cout << "[-------------------------]" << endl;
    Menu();
}

void LogIn(){
    cout << "[-------------------------]" << endl;
    cout << "|         Log In          |" << endl;
    cout << "[-------------------------]" << endl;
    cout << "-Username: ";
    cin >> eUsername;
    cout << "-Password: ";
    cin >> ePassword;
    cout << "-Age: ";
    cin >> eAge;
    cout << "[-------------------------]" << endl;
    cout << "  Name: " << eName << endl;
    cout << "  Username: " << eUsername <<  endl;
    cout << "  Age: " << eAge <<  endl;
    cout << "[-------------------------]" << endl;
    ErrorCheck();
    Menu();
}

void ChangePassword(){
    cout << "[-------------------------]" << endl;
    cout << "|     Change Password     |" << endl;
    cout << "[-------------------------]" << endl;
    cout << "-Username: ";
    cin >> eUsername;
    cout << "-Current Password: ";
    cin >> ePassword;
    cout << "-New password: ";
    cin >> eNewPass;
    cout << "-New password: ";
    cin >> eNewPass;
    ePassword = eNewPass;
    cout << "[-------------------------]" << endl;
    cout << "|    Password Changed!    |" << endl;
    cout << "[-------------------------]" << endl;
    cout << "  Name: " << eName << endl;
    cout << "  Username: " << eUsername <<  endl;
    cout << "  Age: " << eAge <<  endl;
    cout << "[-------------------------]" << endl;
    ErrorCheck();
    Menu();
}
void ErrorCheck(){
    if (eUsername != eUsername){
        cout << " Error, Enter Valid Username" << endl;
    }
    if (ePassword != ePassword){
        cout << " Error, Enter Valid Username" << endl;
    }
   // if (eAge != eAge){
  //      cout << " Error, Enter Valid Username" << endl;
  //  }
}
