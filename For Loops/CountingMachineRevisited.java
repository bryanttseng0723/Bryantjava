import java.util.Scanner;

public class CountingMachineRevisited
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

        //System.out.println( "Type in a message, and I'll display it ten times." );
        System.out.print( "Count from: " );
        int Count = keyboard.nextInt();
        System.out.print( "Count to: " );
        int End = keyboard.nextInt();
        System.out.print( "Count By: " );
        int Gap = keyboard.nextInt();
        System.out.println(" ");
        


        for ( int n = Count ; n <= End ; n=n+Gap )
        {
            System.out.print( n );
            System.out.print(" ");
        }

    }
}