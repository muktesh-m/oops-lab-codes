/*Create a class Binary that contains one float data member.
Overload the 4 arithmetic operator's.*/
#include <iostream>
using namespace std;

class Binary
{
public:
    float num;
    void getData()
    {
        cout << "Enter number: ";
        cin >> num;
    }
    void display()
    {
        cout << "\nNumber: " << num << endl;
    }
    Binary operator-(Binary n)
    {
        Binary result;
        result.num = num - n.num;
        return result;
    }
    Binary operator+(Binary n)
    {
        Binary result;
        result.num = num + n.num;
        return result;
    }
    Binary operator*(Binary n)
    {
        Binary result;
        result.num = num * n.num;
        return result;
    }
    Binary operator/(Binary n)
    {
        Binary result;
        result.num = num / n.num;
        return result;
    }
};

int main()
{
    Binary b1, b2, b3;
    b1.getData();
    b2.getData();
    cout << "\nAddition overloading: ";
    b3 = b1 + b2;
    b3.display();
    cout << "\nSubtraction overloading: ";
    b3 = b1 - b2;
    b3.display();
    cout << "\nMultiplication overloading: ";
    b3 = b1 * b2;
    b3.display();
    cout << "\nDivision overloading: ";
    b3 = b1 / b2;
    b3.display();
}