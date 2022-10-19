/*Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area
of each shape and display it, using virtual function.*/
#include <iostream>
using namespace std;
class Shape
{
public:
    int x, y;

    void set_dim(int i, int j)
    {
        x = i;
        y = j;
    }
    virtual void show_area()
    {
        cout << "No data ";
    }
};

class triangle : public Shape
{
public:
    void show_area()
    {
        cout << "Triangle:" << x * 0.5 * y << endl;
    }
};

class square : public Shape
{
public:
    void show_area()
    {
        cout << "Square: " << x * y << endl;
    }
};

class circle : public Shape
{
public:
    void show_area()
    {
        cout << "Circle: " << 3.14 * x * x;
    }
};

main(void)
{
    Shape *p;
    triangle t;
    square s;
    circle c;

    p = &t;
    p->set_dim(10, 5);
    p->show_area();

    p = &s;
    p->set_dim(10, 5);
    p->show_area();

    p = &c;
    p->set_dim(9, 0);
    p->show_area();

    return 0;
}