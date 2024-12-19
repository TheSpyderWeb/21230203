import java.util.Scanner;

public class CurrencyConverter {

    private static  Scanner myAnswer = new Scanner(System.in);
    private static int eAmount;
    private static int myCurrency;
    private static double eResults = 0;
    private static double eEuro = .93;
    private static double ePound = .81;
    private static double eYen = 140.34;

    public static void main(String[] args) {
        System.out.println("_______________________________________");
        System.out.println("Hello, Welcome to The Currency Converter Machine!");
        System.out.println("   *** This Machine converts US $ Dollars $ " );
        System.out.println("How Much would you like to convert?");
        System.out.println("$");
        eAmount = myAnswer.nextInt();
        //
        System.out.println("_______________________________________");
        System.out.println(" Which Currency would you like to convert to?");
        System.out.println(" 1.Euro €");
        System.out.println(" 2.Pound £");
        System.out.println(" 3.Yen ¥");
        myCurrency = myAnswer.nextInt();
        Converter();
    }
    public static void Converter() {
        if ( myCurrency == 1)
        {
            System.out.println("US $ to Euro € ...");
            eResults = eAmount * eEuro;
            System.out.println("Euro €" + eResults );
            System.exit(0);
        }
        if ( myCurrency == 2)
        {
            System.out.println("US $ to Pound £ ...");
            eResults = eAmount * ePound;
            System.out.println("Pound £" + eResults);
            System.exit(0);
        }
        if ( myCurrency == 3)
        {
            System.out.println("US $ to Yen ¥ ...");
            eResults = eAmount * eYen;
            System.out.println("Yen ¥" + eResults);
            System.exit(0);
        }
        else
        {
            System.out.println("Error, Pick one of the 3 Currencies");
        }
    }
}
