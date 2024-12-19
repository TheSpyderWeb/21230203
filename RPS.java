import java.util.Random;
import java.util.Scanner;

public class RPS {
        private static int eTry = 0;
        private static  Scanner uRead = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.println("______________________________________________"); 
        System.out.println("Welcome, Let's play Rock Paper Scissors!");
        System.out.println("Note * Must enter lower case letters, Any INVALID letter will end the game");
        System.out.println("______________________________________________"); 
        System.out.println("GAME STARTING...");
        System.out.println(" ** 5 ROUNDS ** ");
        //
            while (eTry != 5){
            System.out.println("______________________________________________");
            System.out.println("Pick one of the following options");
            System.out.println("[R] Rock   [P] Paper   [S] Scissors");
            System.out.println("______________________________________________"); 
            int user = userOptions(); // user turn
            int cpu = cpuSelection(); // cpu turn 
            check(user, cpu);
            eTry++;
            }
            if (eTry == 5){
                uRead.close();
                System.out.println("~~~~~~~~~~~~~~");
                System.out.println("Game Ended");
                System.out.println("~~~~~~~~~~~~~~");
                System.exit(0);
            }
    }
    // User selection
    public static char userOptions() {
        //User's choice
    //    Scanner uRead = new Scanner(System.in);
        char selection = uRead.next().charAt(0);
            
            if (selection == 'r'){
                System.out.println("User: Rock 🪨");
                return 'r';
            }
            else if (selection == 'p'){
                System.out.println("User: Paper 📃");
                return 'p';
            }
            else if (selection == 's'){
                System.out.println("User: Scissors ✂️");
                return 's';
            } else {
                System.out.println("INVALID");
                System.exit(0);
            }
            return(0);
    }
    // CPU selection
    public static int cpuSelection() {
        int eMax = 3;
        int eMin = 1;
        Random rand = new Random(System.currentTimeMillis());
        // Random number
        int computer = rand.nextInt((eMax - eMin) + 1) + eMin;
        if (computer == 1){
            System.out.println("Computer: Rock 🪨");
            return 'r';
        }
        else if (computer == 2){
            System.out.println("Computer: Paper 📃");
            return 'p';
        }
        else if (computer == 3){
            System.out.println("Computer: Scissors ✂️");
            return 's';
    }
        return computer;
    }
    // Winner check
    public static void check(int user, int cpu) {
        //
        if ((user == 'r' && cpu == 'p') ||
            (user == 'p' && cpu == 's') ||
            (user == 's' && cpu == 'r')) {
            System.out.println("Computer Wins!");
        }
        else if ((user == 'r' && cpu == 's') ||
             (user == 'p' && cpu == 'r') ||
             (user == 's' && cpu == 'p')) {
            System.out.println("You Win!");
    }
    else
        System.out.println("Tie!");
    }
}
