// 7. WAP to overload the comparison operator(==) using member function
#include <iostream>
using namespace std;
class Cents
{

public:
    int m_cents{};
    Cents(int cents)
        : m_cents{cents} {}

    Cents operator==(int value);

    int getCents() { return m_cents; }
};
bool operator==(Cents &c1, Cents &c2)
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