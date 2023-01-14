#include<iostream>

using namespace std;

int cars, drivers, passengers, cars_not_driven, cars_driven;
double space_in_a_car, carpool_capacity, average_passengers_per_car;




int main()
{
    cars = 100;
    space_in_a_car = 4.0;
    drivers = 30;
    passengers = 90;
    cars_not_driven = cars - drivers;
    cars_driven = drivers;
    carpool_capacity = cars_driven * space_in_a_car;
    average_passengers_per_car = passengers / cars_driven;


    cout<<"There are " << cars<<" cars available.\n";
    cout<<"There are only " << drivers <<" drivers available.\n";
    cout<<"There will be " << cars_not_driven <<" empty cars today.\n";
    cout<<"We can transport " << carpool_capacity <<" people today.\n";
    cout<<"We have " << passengers <<" to carpool today.\n";
    cout<<"We need to put about " << average_passengers_per_car <<" in each car.\n";
    
}