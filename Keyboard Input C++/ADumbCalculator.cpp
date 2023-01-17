#include<iostream>

using namespace std;

int main()
{
    cout<<"What is your first number? \n" ;
    int a;
    cin >>a;
    cout<<"What is your second number? \n" ;
    int b;
    cin >> b;
    cout<<"What is your third number? \n" ;
    int c;
    cin >>c;

    int d=a+b+c;

    cout<<"( 1.1 + 2.2 + 5.5 ) / 2 is... "<< d*0.5 <<"\n" ;
}