#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, r, s = 0;
    cout << "Enter a number";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        s += r;
        n = n / 10;
    }
    cout << "The sum of digits of given no is: " << s << endl;
}