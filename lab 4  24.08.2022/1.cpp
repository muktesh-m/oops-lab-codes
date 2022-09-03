/*1.Create a class named 'Student' with a string variable 'name' and an integer
 variable 'roll_no'. Assign the value of roll_no as '2' and that of name as
  "John" by creating an object of the class Student.*/
#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
};

int main()
{
    student st1;

    st1.name = "john";
    st1.roll_no = 2;

    cout << "Name: " << st1.name << endl;
    cout << "roll: " << st1.roll_no << endl;
}
