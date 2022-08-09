/*Create a class distance which stores a distance in feet and inches. Input 2 distance values
in objects, add them, store the resultant distance in and object and display it.*/
#include <iostream>
using namespace std;

class dist
{
public:
    int feet, inch, x, y, z;
    void input()
    {
        cout << "Enter feets and inches: "<<endl;
        cin >> feet >> inch;
    }
    void output()
    {
        cout << "The distance is ";
        cout << feet << " feets " << inch << " inches" << endl;
    }
    void sum(dist x, dist y)
    {
        feet = x.feet + y.feet;
        inch = x.inch + y.inch;
        if (inch >= 12)
        {
            feet++;
            inch -= 12;
        }
    }
};
int main(int argc, char const *argv[])
{
    dist x, y, z;
    x.input();
    y.input();
    z.sum(x, y);
    z.output();
    return 0;
}
