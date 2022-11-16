//Class templates and static variables

#include <iostream>
using namespace std;
template <class T>
class Test
{
private:
    T val;

public:
    static int count;
    Test()
    {
        count++;
    }
};
template <class T>
int Test<T>::count = 0;
int main()
{
    Test<int> a;                         // value of count <int> is 1
    Test<int> b;                         // value of count<int> is 2
    Test<double> c;                      // value of count <double> is 1
    cout << Test<int>::count << endl;    // prints 2
    cout << Test<double>::count << endl; // prints 1
    return 0;
}
