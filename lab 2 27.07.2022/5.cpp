#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float s1, s2, s3, area, s;
   
    cout << " Input the length of 1st side: ";
    cin >> s1;
    cout << " Input the length of 2nd side: ";
    cin >> s2;
    cout << " Input the length of 3rd side: ";
    cin >> s3;
    s = (s1 + s2 + s3) / 2;
    area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    cout << " The area of the triangle is : " << area << endl;
    cout << endl;
    return 0;
}
