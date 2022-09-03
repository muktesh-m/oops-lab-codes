/*3.Write a program to print the area and perimeter of a triangle having
sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function
to print the area and perimeter.*/
#include <iostream>
#include <math.h>
using namespace std;

class triangle
{
public:
    int s1, s2, s3;
    void perimeter()
    {
        int p = s1 + s2 + s3;
        cout << "The perimeter is :" << p << endl;
    }
    void area()
    {
        float s,area;
         s = ((s1 + s2 + s3) / 2.0f),
         area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
        cout << "The area is :" << area << endl;
    }
};

int main(int argc, char const *argv[])
{
    triangle t;
    t.s1 = 3;
    t.s2 = 4;
    t.s3 = 5;
    t.perimeter();
    t.area();
    return 0;
}
