import java.util.Scanner;

public class ShorterDoubleDice
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);
		int Roll1;
        int Roll2;

		System.out.println("HERE COMES THE DICE!");
        
        int Total;

		do
		{
            System.out.println();
			System.out.print("Roll #1: ");
		    Roll1 = keyboard.nextInt();
            System.out.print("Rol2 #2: ");
            Roll2 = keyboard.nextInt();
            Total = Roll1+ Roll2;
            System.out.print("Your guess: "+Total+"!");
		    
		}while ( Roll1 == Roll2 );

		
	}
}