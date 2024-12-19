/*
Program: HangMan.cpp
Purpose: Hang Man game
Author: Reeham Imam
Date: Dec 1, 2022
*/
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
using namespace std;
 
int Guess (char, string, string&);
void HangMan();
void Random ();
char letter;
int wrong = 7;
string word;
string words[] = {"house","river","cloud","grass","fence"};

int main() {
    // Introduction for user
    cout << "Welcome to Hang Man let's get started" << endl;
    HangMan();
    // this will select a random word for user to guess
     Random ();
    // the 5 is how many '?' will be displayed
    // it's a 5 because the words contain only 5 letters
    string NoShow(5,'?');
    // while loop will determine if user got the right word
    // and will display the appropriate message
    while (wrong != 0) {
        cout << "Guess a letter ";
        cout << " " << NoShow << " : ";
        cin >> letter;
        
        if (Guess(letter, word, NoShow) == 0) {
            cout << "Wrong letter, Try Again\n" << endl;
            wrong = wrong - 1; // subtracts a turn from user
            HangMan();

        } else {
            cout << "Good Job! You Got a letter\n" << endl;
            HangMan();
        }
        if (word == NoShow){
            cout << "Great Job, You Got the Word!" << endl;
            cout << "The Word is: " << word << endl;
            cout << endl;
            break;
        }
    }
    return 0;
}
// loop will keep up  with the guessed words
int Guess (char guess, string word, string &secret) {
    int i;
    int score = 0;
    for (i = 0; i < 5 ; i++) {
        if (guess == secret[i])
            return 0;
        if (guess == word[i]) {
            secret[i] = guess;
            score++;
        }
    }
    return score;
}
// function HangMan will draw the hangman
void HangMan(){
    while ( wrong == 0)
        cout << endl;
    if(wrong == 7){
        cout << "|----" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "You have " << wrong << " chances, guess the right Letter" << endl;
    }
    else if(wrong == 6){
        cout << "|----|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "You have " << wrong << " chances, guess the right Letter" << endl;
    }
    else if(wrong == 5){
        cout << "|----|" << endl;
        cout << "|    O" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "You have " << wrong << " chances, guess the right Letter" << endl;
    }
    else if(wrong == 4){
        cout << "|----|" << endl;
        cout << "|    O" << endl;
        cout << "|    |" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "You have " << wrong << " chances, guess the right Letter" << endl;
    }
    else if(wrong == 3){
        cout << "|----|" << endl;
        cout << "|    O" << endl;
        cout << "|  / | " << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "You have " << wrong << " chances, guess the right Letter" << endl;
    }
    else if(wrong == 2){
        cout << "|----|" << endl;
        cout << "|    O" << endl;
        cout << "|  / | \\"<< endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "You have " << wrong << " chances, guess the right Letter" << endl;
    }
    else if(wrong == 1){
        cout << "|----|" << endl;
        cout << "|    O" << endl;
        cout << "|  / | \\"<< endl;
        cout << "|   /" << endl;
        cout << "|" << endl;
        cout << "You have " << wrong << " chance, guess the right Letter" << endl;
    }
    else {
        cout << "|----|" << endl;
        cout << "|    O" << endl;
        cout << "|  / | \\"<< endl;
        cout << "|   / \\  " << endl;
        cout << "|" << endl;
        cout << "NO MORE CHANCES, GAME OVER" << endl;
        cout << "The Word was: " << word << endl;
    }
}
// this will select a random word for user to guess
void Random (){
    srand(time(NULL));
    int shuffle = rand()% 5;
     word = words[shuffle];
}
