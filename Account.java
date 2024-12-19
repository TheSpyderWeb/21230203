import java.util.Scanner;

public class Account {
    private static  Scanner myAnswer = new Scanner(System.in);
    private static int eAge;
    private static char myChoice;
    private static String eName;
    private static String eUsername;
    private static String ePassword;
    private static String eNewPass;
   public static void main(String[] args) {
    Menu();
   } 
   //
   public static void Menu(){
    System.out.println("[-------------------------]");
    System.out.println("|   1. Register           |");
    System.out.println("|   2. Log In             |");
    System.out.println("|   3. Change Password    |");
    System.out.println("|   4. Exit               |");
    System.out.println("[-------------------------]" );
    System.out.println("What Can I do for You?");
    myChoice = myAnswer.next().charAt(0);
    //
    if ( myChoice == '1'){
        Register();
    }
    else if ( myChoice == '2'){
        LogIn();
    }
    else if ( myChoice == '3'){
        ChangePassword();
    }
    else if ( myChoice == '4'){
    System.out.println("[-------------------------]");
    System.out.println("|           Exit          |");
    System.out.println("[-------------------------]");
    System.exit(0);
    }
    }
   //
   public static void Register(){
    System.out.println("[-------------------------]");
    System.out.println("|        Register         |");
    System.out.println("[-------------------------]");
    System.out.println("-Name: ");
    eName = myAnswer.next();
    System.out.println("-Username: ");
    eUsername = myAnswer.next();
    System.out.println("-Password: ");
    ePassword = myAnswer.next();
    System.out.println("-Age: ");
    eAge = myAnswer.nextInt();
    //
    System.out.println("[-------------------------]");
    System.out.println("|   Account Registered!   |");
    System.out.println("[-------------------------]");
    System.out.println("  Name: " + eName);
    System.out.println("  Username: " + eUsername);
    System.out.println("  Age: " + eAge);
    System.out.println("[-------------------------]");
    Menu();
}
//
public static void LogIn(){
    System.out.println("[-------------------------]");
    System.out.println("|         Log In          |");
    System.out.println("[-------------------------]");
    System.out.println("-Username: ");
    eUsername = myAnswer.next();
    System.out.println("-Password: ");
    ePassword = myAnswer.next();
    System.out.println("-Age: ");
    eAge = myAnswer.nextInt();
    //
    System.out.println("[-------------------------]");
    System.out.println("  Name: " + eName);
    System.out.println("  Username: " + eUsername);
    System.out.println("  Age: " + eAge);
    System.out.println("[-------------------------]");
    ErrorCheck();
    Menu();
}
//
public static void ChangePassword(){
    System.out.println("[-------------------------]");
    System.out.println("|     Change Password     |");
    System.out.println("[-------------------------]");
    System.out.println("-Username: " + eUsername);
    System.out.println("-Current Password: ");
    ePassword = myAnswer.next();
    System.out.println("-New password: ");
    ePassword = myAnswer.next();
    System.out.println("-New password: ");
    ePassword = myAnswer.next();
    ePassword = eNewPass;
    System.out.println("[-------------------------]");
    System.out.println("|    Password Changed!    |");
    System.out.println("[-------------------------]");
    System.out.println("  Name: " + eName);
    System.out.println("  Username: " + eUsername);
    System.out.println("  Age: " + eAge);
    System.out.println("[-------------------------]");
    ErrorCheck();
}
//
public static void ErrorCheck(){
    if (eUsername != eUsername){
        System.out.println(" Error, Enter Valid Username");
    }
    if (ePassword != ePassword){
        System.out.println(" Error, Enter Valid Password");
    }
  }
}
