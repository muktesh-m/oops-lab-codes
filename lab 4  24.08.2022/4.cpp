/*4.Write a program to print the area of a rectangle by creating a
class named 'Area' having two functions. First function named as
'setDim' takes the length and breadth of the rectangle as parameters
and the second function named as 'getArea' returns the area of the rectangle.
Length and breadth of the rectangle are entered through keyboard.*/
#include <iostream>
using namespace std;
class area
{
public:
    float length, breadth;
    void setDim()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    void getArea()
    {
        float area = length * breadth;
        cout << "Area: " << area << endl;
    }
};

int main(int argc, char const *argv[])
{
    area r;
    r.setDim();
    r.getArea();
    return 0;
}
