//3.
#include <iostream>
using namespace std;

class MyClass
{                    
public:              
    float feet;      
    float meter;     
    void myMethod(); 
};

void MyClass::myMethod()
{
    cout << "Enter distance in feet and inches:  ";
    cin >> feet;
    cout << "Enter distance in Meter and centimeter:  ";
    cin >> meter;

    meter = 3.281 * feet;
    if (feet > meter)
        cout << " distance in feet is larger";
    else if (feet < meter)
        cout << " distance in meter is larger";
    else
        cout << "distance are equal";
}

int main()
{
    MyClass myObj;    
    myObj.myMethod(); 
    return 0;
}