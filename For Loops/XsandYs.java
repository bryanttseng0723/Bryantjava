import java.util.Scanner;

public class XsandYs
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

        //System.out.println( "Type in a message, and I'll display it ten times." );
        //System.out.print( "Count from: " );
        //int Count = keyboard.nextInt();
        //System.out.print( "Count to: " );
        //int End = keyboard.nextInt();
        //System.out.print( "Count By: " );
        //int Gap = keyboard.nextInt();
        System.out.println("x           Y");
        System.out.println("-------------------------");
        
        
        for ( double n = -10 ; n <= 10 ; n=n+0.5 )
        {
            double Double = n*n;
            System.out.println( n+"         "+Double );
           
        }

    }
}