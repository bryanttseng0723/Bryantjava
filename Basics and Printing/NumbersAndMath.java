public class NumbersAndMath
{
	public static void main( String[] args )
	{
		System.out.println( "I will now count my chickens:" );

		System.out.println( "Hens " + ( 25.0 + 30.0 / 6.0 ) );
		//25 addition (30 divdie by 6)//
		System.out.println( "Roosters " + ( 100.0 - 25.0 * 3.0 % 4.0 ) );
        //100 minus ( 25 multiply ( 3 modulus 4 )) //
		System.out.println( "Now I will count the eggs:" );

		System.out.println( 3.0 + 2.0 + 1.0 - 5.0 + 4.0 % 2.0 - 1.0 / 4.0 + 6.0 );
        //3 addition 2 addition 1 minus 5 addition ( 4 modulus 2) minus (1 divide 4) addition 6// 
		// this is missing. the answer is different by "floating point" number//
		System.out.println( "Is it true that 3 + 2 < 5 - 7?" );

		System.out.println( 3.0 + 2.0 < 5.0 - 7.0 );
        // (3 addition 2) less-than (5 minus 7)
		System.out.println( "What is 3 + 2? " + ( 3.0 + 2.0 ) );
		//3 addition 2//
		System.out.println( "What is 5 - 7? " + ( 5.0 - 7.0 ) );
        //5 minus 7//
		System.out.println( "Oh, that's why it's false." );

		System.out.println( "How about some more." );

		System.out.println( "Is it greater? " + ( 5.0 > -2.0 ) );
		//5 greater-than -2//
		System.out.println( "Is it greater or equal? " + ( 5.0 >= -2.0 ) );
		//5 greater-than-or-equal -2//
		System.out.println( "Is it less or equal? " + ( 5.0 <= -2.0 ) );
		// 5  less-than-or-equal -2//
	}
}