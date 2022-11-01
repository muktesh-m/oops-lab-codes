/*wap to overload arithmetic + operator for adding
 2 Complex numbers using friend and member function*/
#include <iostream>
using namespace std;

class Complex
{
public:
    float r, i;
    void getData()
    {
        cout << "Real part: ";
        cin >> r;
        cout << "Imaginary part: ";
        cin >> i;
    }
    void display()
    {
        cout << "Number: " << r << " + " << i << "i" << endl;
    }
    friend Complex operator+(Complex c1, Complex c2)
    {
        Complex res;
        res.r = c1.r + c2.r;
        res.i = c1.i + c2.i;
        return res;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();

    c3 = c1 + c2;
    c3.display();

    return 0;
}
