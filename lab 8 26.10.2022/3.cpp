#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:
    Matrix()
    {
        int count = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = count;
                count++;
            }
        }
    }
    void display()
    {
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << '\t';
            }
            cout << endl;
        }
    }
    void operator-()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = -a[i][j];
            }
        }
    }
};

int main()
{
    Matrix m;
    m.display();
    -m;
    m.display();

    return 0;
}