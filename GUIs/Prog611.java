import javax.swing.*;

public class Prog611{
    public static void main (String[] args)
    {
        String name = JOptionPane.showInputDialog("what is your name?");
        String input = JOptionPane.showInputDialog("How old are you?");
        int age = Integer.parseInt(input);

        System.out.print( "Hello,  " + name + "." );
        System.out.print( "Next year, you'll be " + (age+1) );

        System.exit(0);

    }
}