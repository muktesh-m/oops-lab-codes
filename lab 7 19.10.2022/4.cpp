/*Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA
and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee, using virtual
function*/
#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int id;
    double salary;

public:
    void setData(string n, int i)
    {
        name = n;
        id = i;
    }

    virtual void calculateSalary() = 0;
};
class Part_Time : private Employee
{
private:
    int number_of_hours;
    double pay_per_hour;

public:
    Part_Time(int n, double d)
    {
        number_of_hours = n;
        pay_per_hour = d;
    }
    void calculateSalary()
    {
        cout << "The employee salary is:  " << number_of_hours * pay_per_hour << endl;
    }
};

class Regular : private Employee
{
private:
    double DA, HRA, basic_salary;

public:
    Regular(double d, double h, double b)
    {
        DA = d;
        HRA = h;
        basic_salary = b;
    }

public:
    void calculateSalary()
    {
        cout << "The employee salary is:  " << DA + HRA + basic_salary << endl;
    }
};

int main()
{
    Part_Time p(2, 3000);
    Regular r(300, 1000, 200);
    p.calculateSalary();
    r.calculateSalary();
}
