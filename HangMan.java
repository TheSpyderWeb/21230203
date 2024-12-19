import java.util.Random;
//import java.util.Scanner;
import java.util.Scanner;

public class HangMan {

    private static int wrong = 7;
    private static String eWord;
    private static String words[] = {"house","river","cloud","grass","fence"};
    private static String eGuess = new String(new char[eWord.length()]).replace("\0", "*");
    private static  Scanner myAnswer = new Scanner(System.in);

    public static void main(String[] args) {
        // Introduction for user
        System.out.println("Welcome to Hang Man let's get started");
        hangMan();
        //
        eRandom ();
        while (wrong != 0) {
        System.out.println("Guess a letter ");
        System.out.println(eGuess);
        // User input
        myAnswer.nextInt();
        //

       /* if (Guess(letter, word, eGuess)== 0) {
            System.out.println("Wrong letter, Try Again");
            wrong = wrong - 1; // subtracts a turn from user
            hangMan();

        } else {
            System.out.println("Good Job! You Got a letter");
            hangMan();
        }
        if (eWord == eGuess){
            System.out.println("Great Job, You Got the Word!");
            System.out.println("The Word is: " + eWord);
            break;
            } 
        }
        myAnswer.close();*/
    }
    //
    //
  /*  public static int Guess (char guess,String word, String secret) {
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
        return score;*/
    }
    //
    public static void eRandom(){
        int eMax = 5;
        int eMin = 1;
        Random rand = new Random(System.currentTimeMillis());
        // Random number
        int rndWord = rand.nextInt((eMax - eMin) + 1) + eMin;
            int shuffle = rndWord;
            eWord = words[shuffle];
    }
    // function HangMan will draw the hangman
    public static void  hangMan(){

        while ( wrong == 0)
        System.out.println("_______________________________________");
        if(wrong == 7){
            System.out.println("|----");
            System.out.println("|");
            System.out.println("|");
            System.out.println("|");
            System.out.println("|");
            System.out.println("You have " + " chances, guess the right Letter");
        }
        else if(wrong == 6){
            System.out.println("|----|");
            System.out.println("|");
            System.out.println("|");
            System.out.println("|");
            System.out.println("|");
            System.out.println("You have " + " chances, guess the right Letter");
        }
        else if(wrong == 5){
            System.out.println("|----|");
            System.out.println("|    O");
            System.out.println("|");
            System.out.println("|");
            System.out.println("|");
            System.out.println("You have " + " chances, guess the right Letter");
        }
        else if(wrong == 4){
            System.out.println("|----|");
            System.out.println("|    O");
            System.out.println("|    |");
            System.out.println("|");
            System.out.println("|");
            System.out.println("You have " + " chances, guess the right Letter");
        }
        else if(wrong == 3){
            System.out.println("|----|");
            System.out.println("|    O");
            System.out.println("|  / | ");
            System.out.println("|");
            System.out.println("|");
            System.out.println("You have " + " chances, guess the right Letter");
        }
        else if(wrong == 2){
            System.out.println("|----|");
            System.out.println("|    O");
            System.out.println("|  / | \\");
            System.out.println("|");
            System.out.println("|");
            System.out.println("You have " + " chances, guess the right Letter");
        }
        else if(wrong == 1){
            System.out.println("|----|");
            System.out.println("|    O");
            System.out.println("|  / | \\");
            System.out.println("|   /");
            System.out.println("|");
            System.out.println("You have " + " chances, guess the right Letter");
        }
        else {
            System.out.println("|----|");
            System.out.println("|    O");
            System.out.println("|  / | \\");
            System.out.println("|   / \\");
            System.out.println("|");
            System.out.println("NO MORE CHANCES, GAME OVER");
            System.out.println("The Word was: ");
        }
    }
}