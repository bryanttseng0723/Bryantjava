#include<iostream>

using namespace std;

int main()
{
    cout<<"Your height in m: \n";
    int Height;
    cin>> Height;

    cout<<"Your weight in kg: \n";
    int Weight;
    cin>>Weight;

    cout<<"\n";

    int BMI=(Weight/Height)/Height;

    cout<<"Your BMI is "<< BMI<<"\n";
}
