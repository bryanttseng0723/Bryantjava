import java.util.Random; 
import java.util.Scanner;
       

public class OneShotHiLo
{
	public static void main ( String[] args )
	{
		Random r = new Random();
        Scanner  keyboard = new Scanner(System.in);

		int Answer = 1 + r.nextInt(100);
        int GuessNumber;

        String response = "";

        System.out.println("I'm thinking of a number between 1-100.  Try to guess it.");
        System.out.print("> ");
        GuessNumber = keyboard.nextInt();

        if(GuessNumber==Answer)
        {
            System.out.print("You guessed it!  What are the odds?!?");
        }

        else
        {
            System.out.print("Sorry, you are too high.  I was thinking of "+Answer+".");
        }


		
	}
}