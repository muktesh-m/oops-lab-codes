/*Create a class which stores account number, customer name and balance. Derive two
classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
minimum balance. The ‘Current’ class stores the over-due amount. Include member
functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance
Using Parameterised Constructor..*/

#include <iostream>
#include <string.h>
using namespace std;

class Account
{
private:
    int account_no;
    string name;

public:
    float balance;

    Account(int a, string n, float b)
    {
        account_no = a;
        n = name;
        balance = b;
    }
    void deposit(float amount)
    {
        balance += amount;
        cout << endl
             << "Balance deposited: " << amount << endl;
    }
    void display()
    {
        cout << "Account number: " << account_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Savings : public Account
{
private:
    float min_balance;

public:
    Savings(int a, string n, float b, float m) : Account(a, n, b)
    {
        min_balance = m;
    }
    void withdraw(float amount)
    {
        if (balance - amount < min_balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << endl
                 << "Balance withdrawn: " << amount << endl;
        }
    }
};

class Current : public Account
{
private:
    float overdue_amount;

public:
    Current(int a, string n, float b, float o) : Account(a, n, b)
    {
        overdue_amount = o;
    }
    void withdraw(float amount)
    {
        if (balance - amount < overdue_amount)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << endl
                 << "Balance withdrawn: " << amount << endl
                 << endl;
        }
    }
};
int main()
{

    int type;

    char name[20] = "Som";
    cout << "Enter 1. Savings\n2. Current\n";
    cin >> type;
    if (type == 1)
    {
        Savings s(type, name, 5000, 2500);
        s.deposit(1500);
        s.withdraw(200);
        s.display();
    }

    else if (type == 2)
    {
        Current c(type, name, 3000, 6000);
        c.deposit(4500);
        c.withdraw(2500);
        c.display();
    }
    return 0;
}