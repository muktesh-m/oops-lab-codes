/*Create a class which stores id, name, age and basic salary of an employee. Input data for
n number of employees. Calculate the gross salary of all the employees and display it
along with all other details in a tabular form.*/
#include <iostream>
using namespace std;
class Employee
{
private:
    int eid;
    float bsal, hra, da, gsal;
    char name[50];

public:
    void accept()
    {
        cout << "Enter employee id: ";
        cin >> eid;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> bsal;
    }
    float cal()
    {
        hra = (float)(0.1 * bsal);
        da = (float)(0.8 * bsal);
        gsal = (float)(bsal + hra + da);
        return gsal;
    }
    void disp()
    {
        cout << eid << "\t\t";
        cout << name << "\t\t";
        cout << bsal << "\t\t";
        cout << cal() << "\n";
    }
};
int main()
{
    int n;
    cout << "Enter the number of employee's :" << endl;
    cin >> n;
    Employee e[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter employee " << (i + 1) << " details :" << endl;
        e[i].accept();
    }
    cout << "-------------Employee Details----------------" << endl;
    cout << "Employee ID"
         << "\t"
         << "Employee name"
         << "\t"
         << "Basic salary"
         << "\t"
         << "Gross Salary"
         << "\n";
    for (int i = 0; i < n; i++)
    {

        e[i].disp();
    }
    return (0);
}