/*Modify the program ii) to store marks in 5 subjects. Calculate the total marks and
percentage of a student and display it.*/
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll;
    float marks[5];
    float sum = 0;
    float per;

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
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks in Subject no." << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }
    per = (sum / 500) * 100;
}
void Student ::putdata()
{
    cout << "Name of Student: " << name << endl;
    cout << "Roll number of student: " << roll << endl;
    cout << "Percentage of student: " << per << endl;
}

int main(int argc, char const *argv[])
{
    Student std;
    std.getdata();
    cout << endl
         << endl
         << endl;
    std.putdata();

    return 0;
}
