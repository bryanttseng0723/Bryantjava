import java.util.Scanner;

public class TheForgetfulMachine
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);

		String Answer1;
        String Answer2;
		int Number1;
		int Number2;
        

		System.out.print( "Give me a word! " );
		Answer1 = keyboard.next();

		System.out.print( "Give me a second word! " );
		Answer2 = keyboard.next();

        System.out.print( "Great, now your favorite number? " );
		Number1 = keyboard.nextInt();

		System.out.print( "And your second-favorite number... " );
		Number2 = keyboard.nextInt();

		System.out.println( "Whew!  Wasn't that fun?" );
	}
}