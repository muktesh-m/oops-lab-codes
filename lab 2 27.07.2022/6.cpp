#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a[10], s = 0, avg;

    cout << "Enter the marks of students:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the marks of student no " << i + 1 << endl;
        cin >> a[i];
        s += a[i];
    }
    avg = s / 10;
    cout << "The average of 10 students marks is:" << avg << endl;

    return 0;
}
