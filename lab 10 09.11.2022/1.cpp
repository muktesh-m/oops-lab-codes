// open a file for writing
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofile; // declaring an object of class ofstream
    ofile.open("example.txt");

    ofile << "This is a line in a file" << endl;
    ofile << "This is another line" << endl;

    cout << "Data written to file" << endl;
    ofile.close(); // close the file
    return 0;
}
