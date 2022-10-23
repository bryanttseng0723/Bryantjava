import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;

public class AddingValueswithaForLoop
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Number: ");
        int Number = keyboard.nextInt();
        int Sum = 1;

   
        for ( int n = 1 ; n <= Number ; n++ )
        {
            System.out.print(n);
            System.out.print(" ");
            Sum=Sum*n;
        }
        System.out.println("The sum is "+Sum+".");

    }
}