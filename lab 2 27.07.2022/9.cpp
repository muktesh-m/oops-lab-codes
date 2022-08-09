#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, c = 0;
    cout << "Enter a number";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        cout << "Prime number";
    }
    else
        cout << "Non Prime number";
    return 0;
}
