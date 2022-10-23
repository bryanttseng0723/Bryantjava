import java.util.Scanner;

public class NoticingEvenNumbers
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

   
        System.out.println("x");
        System.out.println("---------------");
        
        for ( int n = 1 ; n <= 20 ; n++ )
        {
            double Last = n % 2;
            if(Last==0)
            {
                System.out.println(n+" <");
            }
            else
            {
                System.out.println(n);
            }
           
        }

    }
}