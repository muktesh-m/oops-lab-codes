#include <iostream>
using namespace std;

void swapcba(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    cout << "After swapping: " << *x << " " << *y << endl;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    cout << "before swapping " << a << " " << b << endl;
    swapcba(&a,&b);
   

    return 0;
}
