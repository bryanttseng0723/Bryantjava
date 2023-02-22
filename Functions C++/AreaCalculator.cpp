#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int Choice;
    double base; 
    double height; 
    double length; 
    double width; 
    double radius;

    while (true) {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n";
        cout << "1) Triangle \n";
        cout << "2) Rectangle \n";
        cout << "3) Square \n";
        cout << "4) Circle \n";
        cout << "5) Quit \n";
        cout << "Which shape: ";
        cin >> Choice;

        if (Choice == 1) 
        {
            cout << "\n Base: ";
            cin >> base;
            cout << "Height: ";
            cin >> height;
            double area = 0.5 * base * height;
            cout << "\n The area is " << area << ".\n";
        }
        else if (Choice == 2) 
        {
            cout << "\n Length: ";
            cin >> length;
            cout << "Width: ";
            cin >> width;
            double area = length * width;
            cout << "\n The area is " << area << ".\n";
        }
        else if (Choice == 3) 
        {
            cout << "\n Side length: ";
            cin >> length;
            double area = length * length;
            cout << "\n The area is " << area << ".\n";
        }
        else if (Choice == 4) 
        {
            cout << "\n Radius: ";
            cin >> radius;
            double area = M_PI * radius * radius;
            cout << "\n The area is " << area << ".\n";
        }
        else if (Choice == 5) 
        {
            cout << "Goodbye.\n";
            break;
        }
        else 
        {
            cout << "Invalid input! Please enter a number between 1 and 5.\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    return 0;
}