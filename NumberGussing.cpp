//  NumberGussing.cpp
//  Practice
//  Created by Reeham Imam on 11/24/24.

#include <stdio.h>
#include <Iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Generated();
int Input_check();

bool correct = false;
float attempts = 10;
float input;
float num;

int main(){
    cout << "Guess The Random Number" << endl;
    cout << "Number between 1 - 100" << endl;
    Generated();
    
    for (int i = attempts; i > 0; i--) {
        cout << "You have " << i << " attempts remaining." << endl;
        Input_check();
    }
}

int Generated(){
    srand(time(0));
    int min = 1, max = 100;
    int random = rand() % max + min;
    num = random;
    return random;
}

int Input_check(){
    
        cin >> input;
        if (input == num) {
            cout << "CORRECT!"<< endl;
            correct = true;
            
        } else if (input > num){
            cout << "Too High" << endl;
            
        } else if (input < num){
            cout << "Too Low" << endl;
            correct = false;
        }

    if (correct == true){
        cout << "The number was: " << num << endl;
        cout << "Congrats"<< endl;
        exit(num);
    }
    return num;
}
