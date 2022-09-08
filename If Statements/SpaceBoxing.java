public class SpaceBoxing
{

    public static void main( String[] args)
    {
        
        int visit = 6;
        int Weight = 128;
        
        System.out.println("Please enter your current earth weight:" + Weight );
        System.out.println("I have information for the following planets:" );
        System.out.println("   1. Venus   2. Mars    3. Jupiter " );
        System.out.println("   4. Saturn  5. Uranus  6. Neptune " );

        System.out.println("Which planet are you visiting?" + visit);

        if(visit == 1)
        {
            System.out.println("Your weight would be"+ Weight*0.78+"pounds on that planet.");
        }

        else if(visit == 2)
        {
            System.out.println("Your weight would be"+ Weight*0.39+"pounds on that planet.");
        }

        else if(visit == 3)
        {
            System.out.println("Your weight would be"+ Weight*2.65+"pounds on that planet.");
        }

        else if(visit == 4)
        {
            System.out.println("Your weight would be"+ Weight*1.17+"pounds on that planet.");
        }

        else if(visit == 5)
        {
            System.out.println("Your weight would be"+ Weight*1.05+"pounds on that planet.");
        }
        else if(visit == 6)
        {
            System.out.println("Your weight would be"+ Weight*1.23+"pounds on that planet.");
        }

       
    }
}