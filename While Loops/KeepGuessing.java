import java.util.Scanner;

public class KeepGuessing
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);
		int Answer = 6;

		System.out.println("I have chosen a number between 1 and 10. Try to guess it..");
		System.out.print("Your guess: ");
		int entry = keyboard.nextInt();
        

		while ( entry != Answer )
		{
			System.out.println("\n That is incorrect. Guess again.");
			System.out.print("Your guess: ");
			entry = keyboard.nextInt();
		}

		System.out.println("\nThat's right! You're a good guesser.");
	}
}