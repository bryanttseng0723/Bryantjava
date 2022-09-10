
import java.util.Scanner;

public class HowOldAreYOU
{

    public static void main( String[] args)
    {
        Scanner keyboard = new Scanner(System.in);

        String name;
        int age = 17;
        int drive = 16;
        int vote = 18;
        int car = 25;
        int legal = 25;
        
        System.out.println("Hey, what's your name?");
        name = keyboard.next();

        System.out.println("Ok!"+name +"how old are you?");
        age = keyboard.nextInt();

        if(age < drive)
        {
            System.out.println("You can't drive,"+ name);
        }

        if(age < vote)
        {
            System.out.println("You can't vote,"+ name);
        }

        if(age < car)
        {
            System.out.println("You can't rent a car,"+ name);
        }

        if(age >= legal)
        {
            System.out.println("You can do anything that's legal,"+ name);
        }

       
    }
}


