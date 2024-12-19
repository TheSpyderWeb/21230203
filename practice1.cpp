// Reeham Imam
//  practice1.cpp
//  Practice week 1
//  Created by Reeham Imam on 5/29/23.
#include <iostream>
using namespace std;

int eName;
int eCurrency;
double eAmount = 0;
double eResults = 0;
double eEuro = .93;
double ePound = .81;
double eYen = 140.34;
void Converter();

int main() {
    
    cout << "Hello, Welcome to The Currency Converter Machine!" << endl;
    cout << "   *** This Machine converte US $ Dollars $ \n" << endl;
    cout << "How Much would you like to convert?" << endl;
    cout << "$";
       cin >> eAmount;
       cout << " Which Currency would you like to convert to? \n";
       cout << " 1.Euro € \n";
       cout << " 2.Pound £ \n";
       cout << " 3.Yen ¥ \n";
       cin >> eCurrency;
    Converter();
}

void Converter() {

    if ( eCurrency == 1)
    {
        cout << "US $ to Euro € ..." << endl;
        eResults = eAmount * eEuro;
        cout << "Euro €" << eResults << endl;
        exit(0);
    }
    if ( eCurrency == 2)
    {
        cout << "US $ to Pound £ ..." << endl;
        eResults = eAmount * ePound;
        cout << "Pound £" << eResults << endl;
        exit(0);
    }
    if ( eCurrency == 3)
    {
        cout << "US $ to Yen ¥ ..." << endl;
        eResults = eAmount * eYen;
        cout << "Yen ¥" << eResults << endl;
        exit(0);
    }
    else
    {
        cout << "Error, Pick one of the 3 Currencies" << endl;
    }
}
