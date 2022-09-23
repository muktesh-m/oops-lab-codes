// 10.
#include <iostream>

using namespace std;

class Employee
{
protected:
    string name;
    int id;
    double salary;

public:
};

class Regular : public Employee
{
private:
    double DA;
    double HRA;
    double basic_salary;

public:
    Regular(double d, double h, double b)
    {
        DA = d;
        HRA = h;
        basic_salary = b;
    }
    void display()
    {
        cout << "\nSalary of the Regular employee is " << (DA + HRA + basic_salary);
    }
};

class PartTime : public Employee
{
private:
    int number_of_hours;
    double pay_per_hour;

public:
    PartTime(int n, double p)
    {
        number_of_hours = n;
        pay_per_hour = p;
    }
    void display()
    {
        cout << "\nSalary of the part-time employee is " << (number_of_hours * pay_per_hour);
    }
};

int main()
{
    Regular r(2000, 3000, 10000);
    r.display();

    PartTime p(8, 800);
    p.display();

    return 0;
}
