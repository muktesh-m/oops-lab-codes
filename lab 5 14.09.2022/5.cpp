// reverse of a no using friend function

#include <iostream>
using namespace std;
class reverse
{
private:
    int n;

public:
    void disp()
    {
        cout << "Enter a number to be reversed: ";
        cin >> n;
    }
    friend void rev(reverse r);
};
void rev(reverse r)
{
    int rem, c = 0;
    while (r.n != 0)
    {
        rem = r.n % 10;
        c = c * 10 + rem;
        r.n = r.n / 10;
    }
    cout << "reversed number: " << c << endl;
}

int main(int argc, char const *argv[])
{
    reverse r;
    r.disp();
    rev(r);
    return 0;
}
