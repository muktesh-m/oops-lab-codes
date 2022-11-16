// Class Template Specialization
#include <iostream>
using namespace std;
template <class T>
class Test
{
public:
    Test()
    {
        cout << "General template object \n";
    }
};
template <>
class Test<int>
{
public:
    Test()
    {
        cout << "Specialized template object\n";
    }
};
int main()
{
    Test<int> a;
    Test<char> b;
    Test<float> c;
    return 0;
}