
import java.util.Scanner;

public class SafeSquareRoot
{
	public static void main ( String[] args )
	{
        Scanner keyboard = new Scanner(System.in);
        double InputNumber;
        int Total=0;

        System.out.println("SQUARE ROOT!");
        System.out.println("Enter a number: ");
        InputNumber = keyboard.nextInt();
        
        while(InputNumber<0)
        {
            System.out.println("You can't take the square root of a negative number, silly.");
            System.out.println("Try again: ");
            InputNumber = keyboard.nextInt();
        }
        if(InputNumber >= 0)
        {
            double Square = Math.sqrt(InputNumber);
            System.out.println("The square root of "+InputNumber+" is "+Square);

        }


	}
}