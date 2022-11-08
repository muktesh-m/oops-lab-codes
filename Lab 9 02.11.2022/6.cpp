/*6. Extend the program no 2 to compare the volumes of cubel and cube2
 display the appropriate result by overloading > operator. */
#include <iostream>
#include <math.h>

using namespace std;
class Cube
{
private:
    int side1;
    int side2;

public:
    friend istream &operator>>(istream &i, Cube &d);
    friend ostream &operator<<(ostream &o, Cube &c);
};
istream &operator>>(istream &i, Cube &d)
{
    cout << "Enter the Side Of the cube 1";
    i >> d.side1;
    cout << "Enter the Side Of the cube 2";
    i >> d.side2;
}
ostream &operator<<(ostream &o, Cube &c)
{
    if (c.side1 > c.side2)
    {
        o << "Volume of first cube is bigger than second and its volume is";
        o << pow(c.side1, 3);
    }
    else if (c.side2 > c.side1)
    {
        o << "Volume of first cube is bigger than second and its volume is";
        o << pow(c.side2, 3);
    }
}
int main()
{
    Cube C1;
    cin >> C1;
    cout << C1;
    return 0;
}