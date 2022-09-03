// 10.C++ class Program to perform rational number arithmetic
#include <iostream>
using namespace std;

class Rational
{
public:
    int n1, n2, d1, d2;

    void get_data()
    {
        cout << "Enter numerator of 1st number: ";
        cin >> n1;
        cout << "Enter denominator of 1st number: ";
        cin >> d1;
        cout << "Enter numerator of 2nd number: ";
        cin >> n2;
        cout << "Enter denominator of 2nd number: ";
        cin >> d2;
    }
    int lcm()
    {
        int value;
        if (d1 > d2)
        {
            value = d1;
        }
        else
        {
            value = d2;
        }
        while (1)
        {
            if (value % d1 == 0 && value % d2 == 0)
            {
                return value;
                break;
            }
            value++;
        }
    }
    void sum()
    {
        int nans = 0;
        int dans = 0;
        if (d1 == d2)
        {
            dans = d1;
            nans = n1 + n2;
        }
        else
        {
            dans = lcm();
            nans = (n1 * (dans / d1)) + (n2 * (dans / d2));
        }
        cout << "Sum is: " << nans << "/" << dans << endl;
    }

    void diff()
    {
        int nans = 0;
        int dans = 0;
        if (d1 == d2)
        {
            dans = d1;
            nans = n1 - n2;
        }
        else
        {
            dans = lcm();
            nans = (n1 * (dans / d1)) - (n2 * (dans / d1));
        }
        cout << "Diff is: " << nans << "/" << dans << endl;
    }

    void prod()
    {
        int nans = 1;
        int dans = 1;
        nans = n1 * n2;
        dans = d1 * d2;
        cout << "Product is: " << nans << "/" << dans << endl;
    }

    void div()
    {
        int nans = 1;
        int dans = 1;
        nans = n1 * d2;
        dans = d1 * n2;
        cout << "Division is: " << nans << "/" << dans << endl;
    }
};
int main()
{
    Rational r;
    r.get_data();
    r.sum();
    r.diff();
    r.prod();
    r.div();

    return 0;
}