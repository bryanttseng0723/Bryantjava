import java.util.Scanner;

public class CountingMachine
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

        //System.out.println( "Type in a message, and I'll display it ten times." );
        System.out.print( "Count to: " );
        int Count = keyboard.nextInt();
        int End = Count +1;
        


        for ( int n = 0 ; n < End ; n++ )
        {
            System.out.print( n );
            System.out.print(" ");
        }

    }
}