
//n=n+1 --> means every loop, int n will increase , add 1
//example 1 2 3 4 5 6...

//"int n =1" means there is a number named "n" and this number==1. 

import java.util.Scanner;

public class CountingFor
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

        System.out.println( "Type in a message, and I'll display it ten times." );
        System.out.print( "Message: " );
        String message = keyboard.nextLine();

        for ( int n = 1 ; n <= 5 ; n++ )
        {
            System.out.println( n*2 + ". " + message );
        }

    }
}