import java.util.Random;
import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;

public class Blackjack
{
	public static void main ( String[] args )
	{
		Random r = new Random();
        Scanner keyboard = new Scanner(System.in);

		int Card1 = 2 + r.nextInt(10);
        int Card2 = 2 + r.nextInt(10);
        int Card3 ;
        int Total1 = Card1 + Card2;
        int Card4 = 2 + r.nextInt(10);


        Card3 = 1 + r.nextInt(6);
        String Word1 = "Would you like to 'hit' or 'stay'? " ;

        int Card5 = 2 + r.nextInt(10);
        int Card6 ;
        int Total2 = Card4 + Card5;



        System.out.println("Welcome to Mitchell's blackjack program!");
        System.out.println("You get a "+ Card1+" and a "+Card2);
        System.out.println("Your total "+ Total1);

        System.out.println("The dealer has a "+Card4+" showing, and a hidden card.");
        System.out.print(Word1);
        String Answer = keyboard.nextLine();

        while(Answer.equals("hit"))
        {
            Card3 = 2 + r.nextInt(10);
            System.out.println("You drew a "+ Card3);
            Total1=Total1+Card3;

            if(Total1 <= 21)
            {
                System.out.println("Your total is "+ Total1);
                System.out.print(Word1);
                Answer = keyboard.nextLine();

            }
            else 
            {
                
                System.out.println("Your total is over 21!");
                System.out.println("Dealer WIN!!");
                break;
            }
            
        }
        System.out.println("Your total is "+ Total1);



        
        if(Total1<21)
        {
            System.out.println("Okay, dealer's turn.");
            System.out.println("His hidden card was a "+Card5);
            System.out.println("His total was "+Total2);

            while(Total2<Total1)
            {
                System.out.println("Dealer chooses to hit");
                System.out.println("He draws a "+Card5);
                Total2 = Total2 + Card5;
                System.out.println("His total was "+Total2);
                if(Total2 > 21 )
                {
                    System.out.println("Dealer is over 21!");
                    System.out.println("You WIN!");
                }
                else if(Total2 >=Total1 && Total2 <= 21)
                {
                    System.out.println("Dealer stays.");
                    System.out.println("Dealer total is "+ Total2);
                    System.out.println("Your total is "+ Total1);
                    System.out.println("Dealer WIN!");
                }
    
            }
        }

        

       

		
	}
}