import java.util.Scanner;

public class ADumbCalculator
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);

		System.out.print( "What is your first number? " );
		int number1 = keyboard.nextInt();

		System.out.print( "What is your second number?" );
		int number2 = keyboard.nextInt();

        System.out.print( "What is your third number?" );
        int number3 = keyboard.nextInt();

        double total = number1+number2+number3;
	    System.out.print( "( "+number1+" + "+number2+" + "+number3+" )/2 is..."+total/2 );
		

       
	}
}