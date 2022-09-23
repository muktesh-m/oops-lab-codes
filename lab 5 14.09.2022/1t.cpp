/*WAP to display cube of a number using friend function*/
#include <iostream>
using namespace std;

class cube
{
private:
    int n;

public:
    void input()
    {
        cout << "Enter a number:";
        cin >> n;
    }

    friend void findCube(cube c);
};

void findCube(cube c)
{
    int cube;
    cube = c.n * c.n * c.n;
    cout << "The cube of "<<c.n<<" is " << cube;
}

int main()
{

    cube c;
    c.input();
    findCube(c);

    return 0;
}