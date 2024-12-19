/*
 program : TicTacToe
 Author: Reeham Imam
 Date: Nov 09, 22
 Purpose: Tic Tac Toe
 */

#include <iostream>
using namespace std;

char board[3][3];
void boardxo();
void Xturn();
void Oturn();
void check();

int main() {
    // Intro Text
    cout << "Welcome, Let's Play Tic Tac Toe!\n" << endl;
    cout << "NOTE * If you enter an invalid number such as 10, Your turn will be skipped." << endl;
    cout << "     * To exit, Enter Any letter\n" << endl;
    cout << "Player 1 is X " << endl;
    cout << "Player 2 is O " << endl;
        //First row
    board[0][0] = '1';  board[0][1] = '2';  board[0][2] = '3';
    //Second row
    board[1][0] = '4';  board[1][1] = '5';  board[1][2] = '6';
    //Third row
    board[2][0] = '7';  board[2][1] = '8';  board[2][2] = '9';
    // Output for board
    boardxo();
    // loop for turns
    int turn = 0;
    for (int i = 0; i != 9; ++i) {
        Xturn(); // Turn for x
        turn++;
        if ( turn == 9){
            break;
        }
        Oturn();// Turn for o
        turn++;
        if ( turn == 9){
            break;
        }
    }
    cout << "DRAW" << endl;
    exit(0);
}
void boardxo(){
    // Tic Tac Toe Board
    cout << "     |     |     " << endl;
    cout<<"  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout<<"  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout<<"  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout << "     |     |     " << endl << endl;
}
void Xturn(){
    int choiceX;
    cout << "Player X, it's your turn" << endl;
    cout << "Where Do You Want To Go?" << endl;
    cin >> choiceX;
    // If Statement for player 'X'
    if(choiceX == 1){
        board[0][0] = 'X';
    }
    else if (choiceX == 2){
        board[0][1] = 'X';
    }
    else if (choiceX == 3){
        board[0][2] = 'X';
    }
    else if (choiceX == 4){
        board[1][0] = 'X';
    }
    else if (choiceX == 5){
        board[1][1] = 'X';
    }
    else if (choiceX == 6){
        board[1][2] = 'X';
    }
    else if (choiceX == 7){
        board[2][0] = 'X';
    }
    else if (choiceX == 8){
        board[2][1] = 'X';
    }
    else if (choiceX == 9){
        board[2][2] = 'X';
    }
    else {
        cout << "INVALID!!\n" << endl;
    }
    boardxo();
    check(); // checks for winner
}
void Oturn(){
    int choiceO;
    cout << "Player O, it's your turn" << endl;
    cout << "Where Do You Want To Go?" << endl;
    cin >> choiceO;
    // if-statement for Player 'O'
    if(choiceO == 1){
        board[0][0] = 'O';
    }
    else if (choiceO == 2){
        board[0][1] = 'O';
    }
    else if (choiceO == 3){
        board[0][2] = 'O';
    }
    else if (choiceO == 4){
        board[1][0] = 'O';
    }
    else if (choiceO == 5){
        board[1][1] = 'O';
    }
    else if (choiceO == 6){
        board[1][2] = 'O';
    }
    else if (choiceO == 7){
        board[2][0] = 'O';
    }
    else if (choiceO == 8){
        board[2][1] = 'O';
    }
    else if (choiceO == 9){
        board[2][2] = 'O';
    }
    else {
        cout << "INVALID!!\n" << endl;
    }
    boardxo();
    check(); // checks for a winner
}
void check(){
    
    if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||
        (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||
        (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||
        (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
        (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
        (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
        (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
        (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X'))
    {
        cout << "Player X Wins!" << endl;
        exit(0);
    }
    if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
        (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
        (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||
        (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
        (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
        (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
        (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
        (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O'))
    {
        cout << "Player O Wins!" << endl;
        exit(0);
    }
}
