import java.util.Scanner;


public class ALittleQuiz{

    public static void main( String[] args ){

        Scanner keyboard = new Scanner(System.in);

        String Answer;
        int Q1;
        int Q2;
        int Q3;
        int count1;
        int count2;
        int count3;
        int amount;


        System.out.print( "Are you ready for a quiz? " );
        Answer = keyboard.next();

        System.out.print( "Okay, here it comes! " );

        System.out.print( "Q1) What is the capital of Alaska? " );
        System.out.print( "1) Melbourne" );
        System.out.print( "2) Anchorage " );
        System.out.print( "3) Juneau " );
        Q1 = keyboard.nextInt();

        if(Q1 == 3)
        {
            System.out.println("That's right!");
            count1 = 1;
        }

        else 
        {
            System.out.println("That's wrong!");
        }

        System.out.print( "Q2) Can you store the value cat in a variable of type int?" );
        System.out.print( "1) yes" );
        System.out.print( "2) no " );
        Q2 = keyboard.nextInt();

        if(Q2 == 1)
        {
            System.out.println("Sorry, cat is a string. ints can only store numbers.");
        }

        else 
        {
            System.out.println("That's right!");
            count2 = 1;
        }

        System.out.print( "Q3) What is the result of 9+6/3??" );
        System.out.print( "1) 5" );
        System.out.print( "2) 11 " );
        System.out.print( "3) 15/3 " );

        Q3 = keyboard.nextInt();

        if(Q3 == 2)
        {
            System.out.println("That's correct!");
            count3 = 1;
        }

        else 
        {
            System.out.println("That's wrong!");
        }

       

        System.out.print( "Overall, you got 2 out of 3 correct." );
        System.out.print( "Thanks for playing! " );
  

    }

}

