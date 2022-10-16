import java.util.Scanner;

public class DiceDoubles
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);
		int Roll1;
        int Roll2;

		System.out.println("HERE COMES THE DICE!");
		System.out.print("Roll #1: ");
		Roll1 = keyboard.nextInt();
        System.out.print("Rol2 #1: ");
		Roll2 = keyboard.nextInt();
        
        int Total = Roll1+Roll2;

		while ( Roll1 != Roll2 )
		{
			System.out.println("The total is "+Total+"!");
            System.out.println();
			System.out.print("Roll #1: ");
		    Roll1 = keyboard.nextInt();
            System.out.print("Rol2 #1: ");
		    Roll2 = keyboard.nextInt();
		}

		System.out.print("Your guess: "+Total+"!");
	}
}