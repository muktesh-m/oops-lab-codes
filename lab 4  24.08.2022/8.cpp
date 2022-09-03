// 9.C++ program to find volume of cube, cylinder, sphere by function overloading
#include <iostream>
using namespace std;
float vol(int r, int h)
{
    return (3.14 * r * r * h);
}
float vol(float r1)
{
    return ((4 * 3.14 * r1 * r1 * r1) / 3);
}
float vol(int a)
{
    return (a * a * a);
}

int main()
{
    int r, h, a;
    float r1;
    cout << "Enter side of cube:";
    cin >> a;
    cout << "Enter radius and height of a cylinder:";
    cin >> r >> h;
    cout << "Enter radius of sphere: ";
    cin >> r1;
    cout << endl;
    cout << "Volume of cube is " << vol(a) << endl;
    cout << "Volume of cylinder is " << vol(r, h) << endl;

    cout << "Volume of sphere is " << vol(r1) << endl;
    return 0;
}
