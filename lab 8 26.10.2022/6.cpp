/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
 =: To check whether two Time are same or not.*/

#include <iostream>
using namespace std;
class Time
{
private:
    int hrs, mins, sec;

public:
    Time()

    {

        hrs = mins = sec = 0;
    }
    friend void operator>>(istream &input, Time &obj) // Overloading >> Operator

    {
        do
        {
            cout << "\n Enter hrs   :  ";
            input >> obj.hrs;
        } while (obj.hrs < 0 || obj.hrs > 23);

        do
        {
            cout << "\n Enter mins :  ";
            input >> obj.mins;

        } while (obj.mins < 0 || obj.mins > 59);

        do
        {
            cout << "\n Enter sec :  ";
            input >> obj.sec;
        } while (obj.sec < 0 || obj.sec > 59);
    }
    friend void operator<<(ostream &Output, Time &obj)
    {
        Output << "\n hrs   :  " << obj.hrs;
        Output << "\n mins :  " << obj.mins;
        Output << "\n sec :  " << obj.sec;
    }
    bool operator==(Time t1)
    {
        int total1 = hrs * 3600 + mins * 60 + sec;
        int total2 = t1.hrs * 3600 + t1.mins * 60 + t1.sec;
        if (total1 == total2)
            return true;
        else
            return false;
    }
};

int main()
{
    Time t1, t2;

    cout << "\n Enter Time 01 ";

    cin >> t1;
    cout << "\n Time 01";
    cout << t1;
    cout << "\n\n Enter Time 02 ";
    cin >> t2;
    cout << "\n Second Time ";
    cout << t2;
    if (t1 == t2)
        cout << "\n\n Same ";
    else
        cout << "\n\n Different ";
    return 0;
}