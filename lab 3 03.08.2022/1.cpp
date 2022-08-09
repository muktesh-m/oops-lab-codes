//WAP to display the message "hello" followed by your name on screen.
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter your name" << endl;
    getline(cin, str);
    cout << "Hello! " << str << endl;

    return 0;
}
