/*reversing using friend function*/

#include <iostream>
using namespace std;
class rev
{
private:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter 2 numbers: ";
        cin >> a >> b;
    }
    friend void reverse(rev r);
};

void reverse(rev r)
{
    int t = r.a;
    r.a = r.b;
    r.b = t;

    cout << "The reversed Numbers are: " << r.a << " " << r.b << endl;
}

int main(int argc, char const *argv[])
{
    rev r;
    r.getdata();
    reverse(r);

    return 0;
}
