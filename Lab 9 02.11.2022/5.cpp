/*5. Overload the insertion(<<) and extraction(>>) operators for accepting
and displaying the time in hour,minute and second*/
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
        if (obj.hrs <= 24)
        {
            Output << obj.hrs;
        }
        if (obj.mins <= 59)
        {
            Output << " : " << obj.mins;
        }
        if (obj.sec <= 59)
        {
            Output << " : " << obj.sec;
        }
    }
};

int main()
{
    Time t1;

    cout << "\n Enter Time 01 ";
    cin >> t1;
    cout << "Time is:" ;
    cout << t1;

    return 0;
}