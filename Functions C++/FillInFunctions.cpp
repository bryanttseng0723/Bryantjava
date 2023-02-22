#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char letter;

    srand(time(0));
    letter = 'A' + rand() % 26;
    cout << "The character is: " << letter << endl;

    
    for (int i = -10; i <= 10; i++) 
    {
        cout << i << " ";
    }
    cout << endl;

    
    int num = rand() % 21 - 10;
    cout << "|" << num << "| = " << abs(num) << endl;


    return 0;
}