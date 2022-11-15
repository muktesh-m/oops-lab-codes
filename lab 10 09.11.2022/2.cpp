#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream ifile;              // declaring an object of class ifstream
    ifile.open("inputFile.dat"); // open " inputFile.dat" for reading
    cout << "Reading data from a file :-" << endl;
    while (!ifile.eof()) // while the end of file is not reached
    {
        char ch;
        ifile >> ch; // read a character from the file
        cout << ch << endl;
        float amt;
        ifile >> amt;
        cout << amt << endl;
    }
    ifile.close(); // close the file
    return 0;
}
