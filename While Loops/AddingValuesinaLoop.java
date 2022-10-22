
import java.util.Scanner;

public class AddingValuesinaLoop
{
	public static void main ( String[] args )
	{
        Scanner keyboard = new Scanner(System.in);
        int InputNumber;
        int Total=0;

        System.out.println("I will add up the numbers you give me..");

        do
        {
            System.out.print("Number: ");
            InputNumber = keyboard.nextInt();
            Total = Total+InputNumber;
    
            System.out.println("The total so far is "+Total);
        }while(InputNumber != 0);

        System.out.println("");
        System.out.println("The total is "+Total);

	}
}