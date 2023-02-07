#include<iostream>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

bool isNumber(const string& s)
{
    return std::ranges::all_of(s.begin(), s.end(),
                  [](char c){ return isdigit(c) != 0; });
}


void addition()
{
    double a;
    cout <<"function of addition  \n";
    string input1;
    cout <<"Please input summand: \n";
    cin >> input1;  
    bool check1 = isNumber(input1);
    while (check1=false)
    {
        cout <<"Please input sunamd again: \n";
        cin >> input1;
    }
    
    a = stod(input1);

    double b;
    cout <<"please input addend: \n";
    string input2;
    cin >> input2;
    bool check2 = isNumber(input2);
    while (check2=false)
    {
        cout <<"Please input addend again: \n";
        cin >> input2;
    }
    b = stod(input2);

    cout << a <<" + " << b <<" = " << a+b <<".\n";

}

void subtraction()
{
    cout <<"function of subtraction \n";
    double a;
    cout <<"Please input minuend: \n";
    string input1;
    cin >> input1;

    bool check1 = isNumber(input1);
    while (check1=false)
    {
        cout <<"Please input minuend again: \n";
        cin >> input1;
    }
    
    a = stod(input1);

    double b;
    cout <<"please input subtrahend: \n";
    string input2;
    cin >> input2;
    bool check2 = isNumber(input2);
    while (check2=false)
    {
        cout <<"Please input subtrahend again: \n";
        cin >> input2;
    }
    
    b = stod(input2);
    
    cout << a <<" - " << b <<" = " << a-b <<".\n";
}

void multiplication()
{
    cout <<"function of multiplication \n";
    double a;
    cout <<"Please input multiplicand: \n";
    string input1;
    cin >> input1;
    bool check1 = isNumber(input1);
    while (check1=false)
    {
        cout <<"Please input multiplicand again: \n";
        cin >> input1;
    }
    a = stod(input1);

    double b;
    cout <<"please input multiplier: \n";
    string input2;
    cin >> input2;
    bool check2 = isNumber(input2);
    while (check2=false)
    {
        cout <<"Please input multiplier again: \n";
        cin >> input2;
    }
    b = stod(input2);
    
    cout << a <<" * " << b <<" = " << a*b <<".\n";
}

void division()
{
    cout <<"function of division \n";
    double a;
    cout <<"Please input dividend: \n";
    string input1;
    cin >> input1;
    bool check1 = isNumber(input1);
    while (check1=false)
    {
        cout <<"Please input dividend again: \n";
        cin >> input1;
    }
    a = stod(input1);

    double b;
    cout <<"please input divisor: \n";
    string input2;
    cin >> input2;
    bool check2 = isNumber(input2);
    while (check2=false)
    {
        cout <<"Please input divisor again: \n";
        cin >> input2;
    }
    b = stod(input2);
    
    cout << a <<" / " << b <<" = " << a/b <<".\n";
}

void exponent()
{
    cout <<"function of exponent \n";
    double a;
    cout <<"Please input base number: \n";
    string input1;
    cin >> input1;
    bool check1 = isNumber(input1);
    while (check1=false)
    {
        cout <<"Please input base number again: \n";
        cin >> input1;
    }
    a = stod(input1);

    double b;
    cout <<"please input power: \n";
    string input2;
    cin >> input2;
    bool check2 = isNumber(input2);
    while (check2=false)
    {
        cout <<"Please input power again: \n";
        cin >> input2;
    }
    b = stod(input2);

    int result = 1;
    for(int i=0; i < b; i=i+1)
    {
        result = result*a;
    }
    
    cout << a << "^" << b << " = " <<result << ".\n";
}

void root()
{
    double a;
    cout <<"Would you like to find the root of your number? \n";
    cout <<"Please input your number: \n";
    string input1;
    cin >> input1;
    bool check1 = isNumber(input1);
    while (check1=false)
    {
        cout <<"Please input your number again: \n";
        cin >> input1;
    }
    a = stod(input1);

    double result = sqrt(a);
    
    cout << " the square root of " << a << " is " << result << ".\n";
    
}

void numberWithDecimal()
{
    cout <<"Would you like to check if the number is integer? \n";
    cout <<"Please input number: \n";
    double a;
    string input1;
    cin >> input1;
    bool check1 = isNumber(input1);
    while (check1=false)
    {
        cout <<"Please input number again: \n";
        cin >> input1;
    }
    a = stod(input1);

    double reminder = a % 1;
    if(reminder == 0)
    {
        cout << "the number is a integer! \n";
    }
    else if(reminder != 0)
    {
        cout << "the number is not a integer! \n";
    }
}

int main()
{
    cout <<"Hello!!\n";
    cout <<"this is a smart calculator\n";
    cout <<"Which function do you want to use?\n";
    cout <<"*********************************************************\n";
    cout <<"A ADDITION\n";
    cout <<"B SUBTRACTION\n";
    cout <<"C MULTIPLICATION\n";
    cout <<"D DIVISION\n";
    cout <<"E EXPONENT\n";
    cout <<"F ROOT\n";
    cout <<"G NUMBER WITH DECIMAL\n";
    cout <<"*********************************************************\n";
    
    char answer;
    cin >> answer;

    if(answer == "A")
    {
        addition()
    }
    else if(answer == "B")
    {
        subtraction()
    }
    else if(answer == "C")
    {
        multiplication()
    }
    else if(answer == "D")
    {
        division()
    }
    else if(answer == "E")
    {
        exponent()
    }
    else if(answer == "F")
    {
        root()
    }
    else if(answer == "G")
    {
        numberWithDecimal()
    }

}