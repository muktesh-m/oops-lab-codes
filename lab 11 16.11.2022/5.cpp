// Function Template Specialization
#include <iostream>
using namespace std;
template <typename T>
void fun(T a)
{
    cout << "The main template fun(): " << a << endl;
}
template <>
void fun<int>(int a)
{
    cout << "Specialized Template for int type: "
         << a << endl;
}
int main()
{
    fun<char>('a');
    fun<int>(10);
    fun<float>(10.14);
}