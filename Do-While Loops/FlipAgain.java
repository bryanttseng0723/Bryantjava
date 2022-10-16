
//Ans:1. if we use "do-while",we don't need to give a value of again.
//       if we ues while loop, we need to give a velue of again to let it begin.
//3. if we use "" do-while loop",it works at " just String again"!!


import java.util.Random;
import java.util.Scanner;

public class FlipAgain
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);
		Random rng = new Random();

		String again;

		do
		{
			int flip = rng.nextInt(2);
			String coin;

			if ( flip == 1 )
            {
                coin = "HEADS";
            }
				
			else
            {
                coin = "TAILS";
            }
				

			System.out.println( "You flip a coin and it is... " + coin );

			System.out.print( "Would you like to flip again (y/n)? " );
			again = keyboard.next();
		}while ( again.equals("y") );
	}
}