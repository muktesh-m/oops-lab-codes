#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, f = 1;
    cout << "Enter a number";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        f *= i;
    }
    cout << "The factorial of given number is:" << f << "\n";
    return 0;
}
