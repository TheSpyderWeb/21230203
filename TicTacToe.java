// Reeham Imam Jul 15 2023

import java.util.Scanner;
public class TicTacToe {
    //
    private static char[][] board = new char[3][3];
    //
   public static void main(String[] args) {
    // Intro Message
    System.out.println("_______________________________________");  
    System.out.println(" Welcome, Let's Play Tic Tac Toe! ");
    System.out.println(" NOTE * If you enter an invalid number such as 10, Your turn will be skipped.");
    System.out.println("      * To exit, Enter Any letter ");
    System.out.println(" Player 1 is X ");
    System.out.println(" Player 2 is O ");  
    System.out.println("_______________________________________");
    // Tic Tac Toe Board
    board[0][0] = '1';  board[0][1] = '2';  board[0][2] = '3';
    //Second row
    board[1][0] = '4';  board[1][1] = '5';  board[1][2] = '6';
    //Third row
    board[2][0] = '7';  board[2][1] = '8';  board[2][2] = '9';
   // Start of Game
   xoBoard();
   int turn = 0;
    for (int i = 0; i != 9; ++i) {
        xTurn(); // Turn for x
        turn++;
        if ( turn == 9){
            break;
        }
        oTurn();// Turn for o
        turn++;
        if ( turn == 9){
            break;
        }
    }
    System.out.println("DRAW");
    System.exit(0);

   } 
   // Print Method for Board
   public static void xoBoard() {
    // Tic Tac Toe Board
    System.out.println("     |     |     ");
    System.out.println("  " + board[0][0] + "  |  " + board[0][1] + "  |  " + board[0][2]);
    System.out.println("_____|_____|_____");
    System.out.println("     |     |     ");
    System.out.println("  " + board[1][0] + "  |  " + board[1][1] + "  |  " + board[1][2]);
    System.out.println("_____|_____|_____");
    System.out.println("     |     |     ");
    System.out.println("  " + board[2][0] + "  |  " + board[2][1] + "  |  " + board[2][2]);
    System.out.println("     |     |     ");
   }
   // Player X Turn
   public static void xTurn() {
        System.out.println("_______________________________________");
        System.out.println("--| Player X, it's your turn |--");
        System.out.println("--| Where Do You Want To Go? |--");
        
        Scanner myAnswer = new Scanner(System.in);
        // Choice input
        int choiceX = myAnswer.nextInt();
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
        System.out.println("INVALID!!");
         myAnswer.close();
        }
        xoBoard();
        eCheck();
    }
    
   // Player O Turn
   public static void oTurn() {
    System.out.println("_______________________________________");
   System.out.println("--| Player O, it's your turn |--");
   System.out.println("--| Where Do You Want To Go? |--");
   
   Scanner myAnswer = new Scanner(System.in);
   // Choice input
   int choiceX = myAnswer.nextInt();
   if(choiceX == 1){
       board[0][0] = 'O';
   }
   else if (choiceX == 2){
       board[0][1] = 'O';
   }
   else if (choiceX == 3){
       board[0][2] = 'O';
   }
   else if (choiceX == 4){
       board[1][0] = 'O';
   }
   else if (choiceX == 5){
       board[1][1] = 'O';
   }
   else if (choiceX == 6){
       board[1][2] = 'O';
   }
   else if (choiceX == 7){
       board[2][0] = 'O';
   }
   else if (choiceX == 8){
       board[2][1] = 'O';
   }
   else if (choiceX == 9){
       board[2][2] = 'O';
   }
   else {
   System.out.println("INVALID!!");
    myAnswer.close();
   }
    xoBoard();
    eCheck();
  }
  // Method checking for winner
   public static void eCheck(){
    if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||
    (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||
    (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||
    (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
    (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
    (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
    (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
    (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X'))
{
    System.out.println("--| Player X Wins! |--");
    System.exit(0);
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
    System.out.println("--| Player O Wins! |--");
    System.exit(0);
}
   }
}
