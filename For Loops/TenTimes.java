import java.util.Scanner;

public class TenTimes
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

        //System.out.println( "Type in a message, and I'll display it ten times." );
        //System.out.print( "Message: " );
        String message = keyboard.nextLine();
        System.out.println();


        for ( int n = 0 ; n < 10 ; n++ )
        {
            System.out.println( n+1 + ". " + message );
        }

    }
}