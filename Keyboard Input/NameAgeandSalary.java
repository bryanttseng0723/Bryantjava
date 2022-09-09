import java.util.Scanner;

public class NameAgeandSalary
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);

		String Name;
        int Answer2;
		float money;
		
        

		System.out.print( "Hello.  What is your name? " );
		Name = keyboard.next();

		System.out.print( "Hi, Dennis!  How old are you? " );
		Answer2 = keyboard.nextInt();

        System.out.print( "So you're"+ Answer2 +", eh?  That's not old at all!" );
        System.out.print( "How much do you make, Dennis?" );
		money = keyboard.nextFloat();

		System.out.print( money+"!  I hope that's per hour and not per year! LOL! " );
	
	
	}
}