import java.util.Random;
import java.util.Scanner;

public class HiLowithLimitedTries
{
	public static void main ( String[] args )
	{
		Random r = new Random();
        Scanner keyboard = new Scanner(System.in);

		int Choice = 1 + r.nextInt(10);
        int Guess;
		String response = "";

        System.out.println("I'm thinking of a number between 1-100.  You have 7 guesses.");
        System.out.println("First guess: ");
        Guess = keyboard.nextInt();

        if(Guess == Choice)
        {
            System.out.println("You guessed it!  What are the odds?!?");
        }
        else if(Guess > Choice)
        {
            System.out.println("Sorry, that guess is too high.");
        }
        else if(Guess < Choice)
        {
            System.out.println("Sorry, that guess is too low.");
        }


        int i = 2;

        do
        {
            System.out.println("Guess: #"+ i +":");
            Guess = keyboard.nextInt();
            if(Guess == Choice)
            {
                System.out.println("You guessed it!  What are the odds?!?");
                break;
            }
            else if(Guess > Choice)
            {
                System.out.println("Sorry, that guess is too high.");
            }
            else if(Guess < Choice)
            {
                System.out.println("Sorry, that guess is too low.");
            }
            i++;

        }while(i < 7);

        System.out.println("Sorry, you didn't guess it in 7 tries.  You lose.");

		
	}
}