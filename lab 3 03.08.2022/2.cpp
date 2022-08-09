/*Create a class which stores name, roll number and total marks for a student. Input the
data for a student and display it.*/
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll;
    float marks;

public:
    void getdata();
    void putdata();
};
void Student ::getdata()
{
    cout << "Enter Student's name: ";
    getline(cin, name);
    cout << "Enter roll numbers: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;
}
void Student ::putdata()
{
    cout << "Name of Student: " << name << endl;
    cout << "Roll number of student: " << roll << endl;
    cout << "Total marks of student: " << marks << endl;
}

int main(int argc, char const *argv[])
{
    Student std;
    std.getdata();
    cout << endl<< endl<< endl;
    std.putdata();

    return 0;
}
