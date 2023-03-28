#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class Triangle 
{
    private:
    int x1, y1, x2, y2, x3, y3;
    double side1, side2, side3, area;

    public:
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3) 
    {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        this->x3 = x3;
        this->y3 = y3;
        
        side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        
        double s = (side1 + side2 + side3) / 2.0;
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    
    void print() 
    {
        cout << "Coordinates: (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), (" << x3 << ", " << y3 << ")\n";
        cout << "Side lengths: " << side1 << ", " << side2 << ", " << side3 << "\n";
        cout << "Area: " << area << "\n";
    }
};

int main() 
{
    srand(time(0)); // Initialize random seed
    
    // Generate three random points
    int x1 = rand() % 100;
    int y1 = rand() % 100;
    int x2 = rand() % 100;
    int y2 = rand() % 100;
    int x3 = rand() % 100;
    int y3 = rand() % 100;
    
    Triangle t(x1, y1, x2, y2, x3, y3);
    t.print();
    
    return 0;
}
