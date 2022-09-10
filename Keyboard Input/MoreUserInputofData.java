import java.util.Scanner;

public class MoreUserInputofData
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);

		String firstname;
        String Lastname;
		int Grade;
		int ID;
        String Login;
        float GPA;
        

		System.out.print( "First name: " );
		firstname = keyboard.next();

		System.out.print( "Last name: " );
		Lastname = keyboard.next();

        System.out.print( "Grade (9-12): " );
		Grade = keyboard.nextInt();

		System.out.print( "Student ID: " );
		ID = keyboard.nextInt();

        System.out.print( "Login: " );
		Login = keyboard.next();

        System.out.print( "GPA " );
		GPA = keyboard.nextFloat();

		System.out.println( "Your information:" );
        System.out.println( "Login:"+ Login );
        System.out.println( "ID: "+ ID );
        System.out.println( "Name:" + Lastname + firstname );
        System.out.println( "GPA:" + GPA );
        System.out.println( "Grade:" + Grade );
	}
}