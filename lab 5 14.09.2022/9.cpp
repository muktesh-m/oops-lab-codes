// 9.

#include <iostream>
using namespace std;
class shape
{
public:
    virtual void area() = 0; 
};
class circle : public shape
{
    float r;  
public:
    void area()
    {
        cout << "\nEnter radius : ";
        cin >> r;
        cout << "\nArea of circle : " << (3.14 * r * r);
    }
};
class rectangle : public shape
{
    int l, b; 
public:
    void area()
    {
        cout << "\nEnter length : ";
        cin >> l;
        cout << "\nEnter breadth : ";
        cin >> b;
        cout << "\nArea of rectangle : " << l * b;
    }
};
class triangle : public shape
{

    int h, b;
    float a;

public:
    void area()
    {
        cout << "\nEnter height : ";
        cin >> h;
        cout << "\nEnter breadth : ";
        cin >> b;
        a = 0.5 * h * b;
        cout << "\nArea of triangle : " << a;
    }
};
int main()
{
    circle c; 
    c.area();
    rectangle r; 
    r.area();
    triangle t; 
    t.area();
   
    return 0;
}