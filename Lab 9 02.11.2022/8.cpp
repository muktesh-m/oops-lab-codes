// 8. Do the Q7 using friend function.
#include <iostream>
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents) : m_cents{cents} {}

    friend bool operator==(const Cents &c1, const Cents &c2);
};

bool operator==(const Cents &c1, const Cents &c2)
{
    return c1.m_cents == c2.m_cents;
}

int main()
{
    Cents f{10};
    Cents n{5};

    if (n == f)
        cout << "a f is equal to a n.\n";
    else
        cout << "Not equal";

    return 0;
}