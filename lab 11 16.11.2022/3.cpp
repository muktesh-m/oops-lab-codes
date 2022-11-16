// Default value for Template Arguments
#include <iostream>
using namespace std;
template <class T, class U = char>
class A
{
    T x;
    U y;

public:
    A() { cout << "Constructor Called" << endl; }
};
int main()
{
    A<char, int> a;
    A<int> b;
    return 0;
}