import java.util.Random;

public class FortuneCookie
{
	public static void main ( String[] args )
	{
		Random r = new Random();

		int Choice1 = 1 + r.nextInt(54);
        int Choice2 = 1 + r.nextInt(54);
        int Choice3 = 1 + r.nextInt(54);
        int Choice4 = 1 + r.nextInt(54);
        int Choice5 = 1 + r.nextInt(54);
        int Choice6 = 1 + r.nextInt(54);

        String response = "";

        System.out.println("Fortune cookie says: You will find happiness with a new love.");
        System.out.println("Fortune cookie says: Stick with your wife.");

        System.out.print(Choice1 +" - ");
        System.out.print(Choice2 +" - ");
        System.out.print(Choice3 +" - ");
        System.out.print(Choice4 +" - ");
        System.out.print(Choice5 +" - ");
        System.out.print(Choice6);

		
	}
}