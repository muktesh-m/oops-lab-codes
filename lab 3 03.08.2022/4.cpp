/*Create a class complex which stores real and imaginary part of a complex number. Input
10 complex numbers and display them.*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int r[10];
    int im[10];

public:
    void getdata();
    void printdata();
};
void Complex::getdata()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter The real and imaginary part of the complex number" << i + 1 << endl;
        cin >> r[i] >> im[i];
    }
}
void Complex::printdata()
{
    cout << "The complex numberes are:-" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << r[i] << " + i" << im[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    Complex c;
    c.getdata();
    cout << endl
         << endl;
    c.printdata();

    return 0;
}
