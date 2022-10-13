import java.util.Random;

public class ANumberGuessingGame
{
	public static void main ( String[] args )
	{
		Random r = new Random();

		int Choice = 1 + r.nextInt(10);
        int Guess = 1 + r.nextInt(10);
		String response = "";

        System.out.println("I'm thinking of a number from 1 to 10.");
        System.out.println("Your guess: "+ Guess);

        if(Choice == Guess)
        {
            System.out.println("That's right!  My secret number was "+ Choice);
        }

        else
        {
            System.out.println("Sorry, but I was really thinking of "+ Choice);
        }

		
	}
}