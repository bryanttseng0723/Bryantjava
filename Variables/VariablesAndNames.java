public class VariablesAndNames
{
    public static void main( String[] args )
    {
        int cars, drivers, passengers, cars_not_driven, cars_driven;
        double space_in_a_car, carpool_capacity, average_passengers_per_car;
        //announce these vairancves//

        cars = 100;
        //amount of cars//
        space_in_a_car = 4.0;
        //the space of car//
        //I used 4.0 for space_in_a_car, but is that necessary? What happens if it's just 4?
        //It is necessary. If all car is fulled,it's just 4.//
        drivers = 30;
        //amount of drivers//
        passengers = 90;
        //amount of  passengers//
        cars_not_driven = cars - drivers;
        //amount of undriven car//
        cars_driven = drivers;
        //amount of driven car = drivers//
        carpool_capacity = cars_driven * space_in_a_car;
        //amount of people as cars are fulled//
        average_passengers_per_car = passengers / cars_driven;
        //average passengers per car//


        System.out.println( "There are " + cars + " cars available." );
        System.out.println( "There are only " + drivers + " drivers available." );
        System.out.println( "There will be " + cars_not_driven + " empty cars today." );
        System.out.println( "We can transport " + carpool_capacity + " people today." );
        System.out.println( "We have " + passengers + " to carpool today." );
        System.out.println( "We need to put about " + average_passengers_per_car + " in each car." );
    }
}