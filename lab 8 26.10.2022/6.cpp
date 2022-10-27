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
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }
    friend int operator>>(istream &input, Time &t) // Overloading >> Operator
    {
        cout << "\n Enter Hours   :  ";
        input >> t.hours;
        cout << "\n Enter Minutes :  ";
        input >> t.minutes;
        cout << "\n Enter Seconds :  ";
        input >> t.seconds;
        t.minutes = t.minutes + t.seconds / 60;
        t.seconds %= 60;
        t.hours = t.hours + t.minutes / 60;
        t.minutes %= 60;
        if (t.hours >= 25)
            return 1;
        else
            return 0;
    }
    void operator<<(ostream &Output:, Time &t) // Overloading << Operator
    {
    Output:
        << "\n Hours   :  " << t.hours;
    Output:
        << "\n Minutes :  " << t.minutes;
    Output:
        << "\n Seconds :  " << t.seconds;
    }
    int operator==(Time t1) // Overloading == Operator
    {
        int tot = hours * 3600 + minutes * 60 + seconds;
        int tot1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
        if (tot == tot1)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Time t, t1;
    cout << "\n Enter First Time ";
    cout << "\n -------------------- ";
    if (cin >> t)
    {
        cout << "\n Invalid Time ";
        return 0;
    }
    cout << "\n First Time ";
    cin >> t;
    cout << "\n\n Enter Second Time ";

    if (cin >> t1)
    {
        cout << "\n Invalid Time ";
        return 0;
    }
    cout << "\n Second Time ";
    cin >> t1;
    if (t == t1)
        cout << "\n\n Times are Same ";
    else
        cout << "\n\n Times are Different ";
    return 0;
}