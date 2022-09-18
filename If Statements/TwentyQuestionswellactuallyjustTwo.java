import java.util.Scanner;


public class  TwentyQuestionswellactuallyjustTwo
{

    public static void main( String[] args )
    {

        Scanner  keyboard = new Scanner(System.in);

        String Answer1;
        String Answer2;
        
       
        String possibilities ;
        String possibilities1 = "squirrel" ;
        String possibilities2 = "moose" ;
        String possibilities3 = "carrot" ;
        String possibilities4 = "watermelon" ;
        String possibilities5 = "paper clip" ;
        String possibilities6 = "Camaro" ;

        System.out.println( "TWO QUESTIONS! " );
        System.out.println( "Think of an object, and I'll try to guess it. " );


        System.out.println( "Question 1) Is it animal, vegetable, or mineral?" );
        Answer1 = keyboard.next();

        
        System.out.println( "Question 2) Is it bigger than a breadbox?" );
        Answer2 = keyboard.next();

        if(Answer1.equals("animal") )
        {
            if(Answer2.equals("no")){

                System.out.println( "My guess is that you are thinking of a squirrel." );
            }
            else  if(Answer2.equals("yes")){
                System.out.println( "My guess is that you are thinking of a moose." );
            }
           
        }

   

        else if(Answer1.equals("vegetable"))
        {
            if(Answer2.equals( "no"))
            {
                System.out.println( "My guess is that you are thinking of a carrot." );
            }

            else if(Answer2.equals("yes")){
                System.out.println( "My guess is that you are thinking of a watermelon." );
            }
        }
  
        

        else if(Answer1 .equals("mineral"))
        {
            if(Answer2 .equals("no")){
                System.out.println( "My guess is that you are thinking of a paper clip." );
            }

            else if(Answer2.equals("yes")){
                System.out.println( "My guess is that you are thinking of a Camaro." );
        }
    }

       
       

        System.out.println( "I would ask you if I'm right, but I don't actually care. " );
  

    }

}
