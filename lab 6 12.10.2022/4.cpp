/*Extend the program ii. of inheritance to include a class sports, which stores the marks in
sports activity. Derive the result class from the classes ‘test’ and ‘sports’. Create objects
using parameterized constructors .Calculate the total marks and percentage of a student.
*/

#include <iostream>
using namespace std;
class Student
{
};
class Test : public Student
{
protected:
    int s1, s2, s3, s4, s5;

public:
    Test() : Student() {}
    void getmarks()
    {
        cout << "Input marks: \n";
        cout << "Subject 1: ";
        cin >> s1;
        cout << "Subject 2: ";
        cin >> s2;
        cout << "Subject 3: ";
        cin >> s3;
        cout << "Subject 4: ";
        cin >> s4;
        cout << "Subject 5: ";
        cin >> s5;
    }
    void putmarks()
    {
        cout << "Subject 1: " << s1 << endl;
        cout << "Subject 2: " << s2 << endl;
        cout << "Subject 3: " << s3 << endl;
        cout << "Subject 4: " << s4 << endl;
        cout << "Subject 5: " << s5 << endl;
    }
};
class Sports : public Student
{
protected:
    int sports;

public:
    Sports() : Student() {}
    void getscore()
    {
        cout << "Input sports scores: \n";
        cin >> sports;
    }
    void putscore()
    {
        cout << "SPorts: " << sports << endl;
    }
};
class Result : public Sports, public Test
{
    int total;

public:
    Result(int roll) : Sports(), Test()
    {
        
        getmarks();
        getscore();
        total = sports + s1 + s2 + s3 + s4 + s5;
    }
    void display()
    {
        cout << endl;
        
        cout << "Test Marks: \n";
        Test::putmarks();
        cout << "Sports Scores: \n";
        Sports::putscore();
        cout << "Total: " << total << endl;
        cout << "Percentage: " << total / 6 << " % " << endl;
    }
};
int main()
{
    int roll;
    cout << "Roll no: ";
    cin >> roll;
    Result result(roll);
    cout<<endl<<"Roll Number: "<<roll << endl;
    result.display();
    return 0;
}