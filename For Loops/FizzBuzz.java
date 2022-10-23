import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;

public class FizzBuzz
{
    public static void main( String[] args )
    {
        Scanner keyboard = new Scanner(System.in);

   

        
        for ( int n = 1 ; n <= 100 ; n++ )
        {
            double Last3 = n % 3;
            double Last5 = n % 5;
            double Last15 = n % 15;
            if(Last3== 0 && Last5!=0 && Last15 !=0)
            {
                System.out.println("Fizz");
            }
            else if(Last3!= 0 && Last5==0 && Last15 !=0)
            {
                System.out.println("Buzz");
            }
            else if(Last3== 0 && Last5==0 && Last15 ==0)
            {
                System.out.println("FizzBuzz");
            }
            else
            {
                System.out.println(n);
            }
        }

    }
}