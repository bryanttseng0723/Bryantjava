import java.util.Scanner;

public class HowOldAreYOUSpecial
{

    public static void main( String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        
        String name ;
        int age = 14;
        int drive = 16;
        int vote = 18;
        int car = 24;
        int legal = 25;
        
        System.out.println("Hey, what's your name?");
        name = keyboard.next();

        System.out.println("Ok!"+name +"how old are you?");
        age = keyboard.nextInt();

        if(age < drive)
        {
            System.out.println("You can't drive,"+ name);
        }

        else if(drive <= age)
        {
            System.out.println("You can drive but not vote."+ name);
        }

        else if(age <= car)
        {
            System.out.println("You can vote but not rent a car."+ name);
        }

        else if(age >= legal)
        {
            System.out.println("You can do pretty much anything."+ name);
        }

       
    }
}