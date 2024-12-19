//  TempConverter.cpp
//  Prcatice
//  Created by Reeham Imam on 11/29/24.
#include <stdio.h>
#include <Iostream>

using namespace std;

float temp;
short Celsius;
short Fahrenheit;
short Kelvin;
short conv;

void tempConvertion();

int main(){
    
    cout << "Temp converter" << endl;
    cout << "( 1 ) Celsius to Kelvin" << endl;
    cout << "( 2 ) Kelvin to Celcius" << endl;
    cout << "( 3 ) Fahrenheit to Celsius" << endl;
    cout << "( 4 ) Celsius to Fahrenheit" << endl;
    cout << "( 5 ) Fahrenheit to Kelvin" << endl;
    cout << "( 6 ) Kelvin to Fahrenheit" << endl;
    tempConvertion();
    return 0;
}

void tempConvertion(){
    cin >> conv;
    
    switch (conv) {
        case 1:
            cout << "( 1 ) Celsius to Kelvin" << endl;
            cout << "Enter Temp:" <<endl;
            cin >> temp;
            cout << temp + 273.15 << endl;
            break;
            
        case 2:
            cout << "( 2 ) Kelvin to Celcius" << endl;
            cout << "Enter Temp:" <<endl;
            cin >> temp;
            cout << temp - 273.15 << endl;
            break;
            
        case 3:
            cout << "( 3 ) Fahrenheit to Celsius" << endl;
            cout << "Enter Temp:" <<endl;
            cin >> temp;
            cout << ((temp - 32) * 5/9) << endl;
            break;
            
        case 4:
            cout << "( 4 ) Celsius to Fahrenheit" << endl;
            cout << "Enter Temp:" <<endl;
            cin >> temp;
            cout << ((temp * 9/5) + 32) << endl;
            break;
            
        case 5:
            cout << "( 5 ) Fahrenheit to Kelvin" << endl;
            cout << "Enter Temp:" <<endl;
            cin >> temp;
            cout << ((temp - 32) * 5/9 + 273.15) << endl;
            break;
            
        case 6:
            cout << "( 6 ) Kelvin to Fahrenheit" << endl;
            cout << "Enter Temp:" <<endl;
            cin >> temp;
            cout << ((temp - 273.15) * 9/5 + 32) << endl;
            break;
            
        default:
            cout << "Try Again" << endl;
            break;
    }
}
