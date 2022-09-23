/*WAP to swap private data member of two classes.
[The classes have no relation with each other].*/

#include <iostream>
using namespace std;

class class2;
class class1
{
    int value1;

public:
    void indata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1 << "\n";
    }
    friend void exchange(class1 &, class2 &);
};
class class2
{
    int value2;

public:
    void indata(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << value2 << "\n";
    }
    friend void exchange(class1 &, class2 &);
};
void exchange(class1 &x, class2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main()
{
    class1 C1;
    class2 C2;
    int a, b;
    cout << "Enter data member values: ";
    cin >> a >> b;
    C1.indata(a);
    C2.indata(b);
    cout << "Values before exchange"
         << "\n";
    C1.display();
    C2.display();
    exchange(C1, C2);
    cout << "Values after exchange"
         << "\n";
    C1.display();
    C2.display();
    return 0;
}