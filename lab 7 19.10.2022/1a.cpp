/* WAP to overload following operators for class distance, which stores the
distance in feet and inches.
a) Binary + to
-add two objects (D3=D1+D2)
-Add an object to an integer, where the integer should be added to the
inches value ( D2=4+D1)
b) Unary - */

// C++ program to show binary operator overloading
#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    Distance operator+(Distance &D2) 
    {
        Distance D3;
        D3.feet = feet + D2.feet;
        D3.inch = inch + D2.inch;
        return D3;
    }
};
int main()
{
    Distance D1(8, 9);
    Distance D2(10, 2);
    Distance D3, D4;
    D3 = D1 + D2;
    cout << "\nTotal Feet & Inches: " << D3.feet << "'" << D3.inch<<" '' ";
    return 0;
}
