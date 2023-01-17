#include<iostream>

using namespace std;

int main()
{
    cout<<"Your height in m: \n";
    double Height;
    cin>> Height;

    cout<<"Your weight in kg: \n";
    double Weight;
    cin>>Weight;

    cout<<"\n";

    double BMI=(Weight/Height)/Height;

    cout<<"Your BMI is "<< BMI<<"\n";
}
