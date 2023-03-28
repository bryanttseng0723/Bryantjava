#include <iostream>
using namespace std;

class Dog 
{
    private:
    int age;
    double weight;

    public:
    Dog(int a, double w) 
    {
        age = a;
        weight = w;
    }

    int getAge() const 
    {
        return age;
    }

    double getWeight() const 
    {
        return weight;
    }
};

int main() 
{
    Dog pet(3, 12.5);
    cout << "Pet's age: " << pet.getAge() << endl;
    cout << "Pet's weight: " << pet.getWeight() << endl;
    return 0;
}
