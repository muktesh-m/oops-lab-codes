#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter a number";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Even number";
    }
    else
        cout << "Odd number";
    return 0;
}
