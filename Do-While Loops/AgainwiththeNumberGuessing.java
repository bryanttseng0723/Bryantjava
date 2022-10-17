import java.util.Random;
import java.util.Scanner;

public class AgainwiththeNumberGuessing
{
	public static void main ( String[] args )
	{
		Random r = new Random();
        Scanner keyboard = new Scanner(System.in);

		int Choice = 1 + r.nextInt(10);
        int Guess;

        int Times = 0;
        

        do
        {
            System.out.println("I'm thinking of a number from 1 to 10.");
            System.out.print("Your guess: ");
            Guess = keyboard.nextInt();
            Times++;
        }while(Guess != Choice);

        System.out.println("That's right!  You're a good guesser.");
        if(Times==1)
        {
            System.out.println("It only took you "+Times+" try.");
        }
        else
        {
            System.out.println("It only took you "+Times+" tries.");
        }
        

		
	}
}