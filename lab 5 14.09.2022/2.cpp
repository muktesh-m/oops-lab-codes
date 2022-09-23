//2.
#include <iostream>
using namespace std;
class A
{
private:
    int a, b, avg;

public:
    A()
    {
        cout << "Enter First number:" << endl;
        cin >> a;
        cout << "Enter Second number:" << endl;
        cin >> b;
        avg = (a + b) / 2;
    }
    friend class B;
};
class B
{
public:
    void display(A &t)
    {
        cout << "Average of the numbers is:" << t.avg;
    }
};
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}