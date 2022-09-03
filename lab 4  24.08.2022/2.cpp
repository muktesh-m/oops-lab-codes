/*2.Assign and print the roll number, phone number and
address of two students having names "Sam" and "John"
 respectively by creating two objects of the class 'Student'.*/
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int rollno;
    long long phno;
    string adress;
    void getdata()
    {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Phone Number: ";
        cin >> phno;
        cout << "Enter Adress: ";
        getline(cin, adress);
    }
    void disp()
    {
        cout << "Name: " << name << "\trollno: " << rollno
             << "\tphno: " << phno << "\tadress: " << adress << endl;
    }
};
int main()
{
    Student s1, s2;
    s1.name = "Sam";
    s2.name = "John";
    s1.getdata();
    s2.getdata();
    s1.disp();
    s2.disp();

    return 0;
}
