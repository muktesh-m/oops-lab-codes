#include <iostream>
using namespace std;

class Complex
{
public:
    int re1, re2;
    int im1, im2;
    int rs = 0, is = 0;
    int rd = 0, id = 0;
    int rp = 0, ip = 0;
    void getdata()
    {
        cout << "Enter 1st real part: ";
        cin >> re1;
        cout << "Enter 1st imaginary part: ";
        cin >> im1;
        cout << "Enter 2nd real part: ";
        cin >> re2;
        cout << "Enter 2nd imaginary part: ";
        cin >> im2;
    }

    void sum()
    {
        rs = re1 + re2;
        is = im1 + im2;
        cout << "a+b = " << rs << "+" << "i " << is << endl;
    }

    void diff()
    {
        rd = re1 - re2;
        id = im1 - im2;
        if (id < 0)
            cout << "a-b = " << rd << " "  << "i " << id<< endl;
        else
            cout << "a-b = " << rd << "+" << "i " << id << endl;
    }

    void product()
    {

        rp = (re1 * re2) - (im1 * im2);
        ip = (re1 * im2) + (re2 * im1);
        cout << "a*b = " << rp << "+" << "i " << ip << endl;
    }
};

int main()
{
    Complex c;
    c.getdata();
    c.sum();
    c.diff();
    c.product();
}