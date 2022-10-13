import java.util.Random;

public class Dice
{
	public static void main ( String[] args )
	{
		Random r = new Random();

		int Roll1 = 1 + r.nextInt(6);
        int Roll2 = 1 + r.nextInt(6);
        int Total = Roll1 + Roll2;

        String response = "";

        System.out.println("HERE COMES THE DICE!");
        System.out.println("Roll #1: "+ Roll1);
        System.out.println("Roll #2: "+ Roll2);
        System.out.println("The total is  "+ Total +"!");


		
	}
}