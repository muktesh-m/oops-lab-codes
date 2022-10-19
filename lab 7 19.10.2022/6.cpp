// WAP to demonstrate use of pure virtual function and abstract base class.
#include <iostream>
using namespace std;
class AbstractBase
{
public:
    string baseprivate1;

    virtual void set_privates() = 0;
    void print() { cout << baseprivate1 << endl; }
    void foo()
    {
        cout << "CPP Code";
    }
};

class Derived : private AbstractBase
{ // use private inheritance on AbstractBase
private:
    string derivedprivate1;

public:
    // expose AbstractBase's methods with using-declarations
    using AbstractBase::foo;
    using AbstractBase::print;

    void set_privates()
    {
        this->baseprivate1 = "Base private1";
        this->derivedprivate1 = "Derived private1";
    }

    void print()
    {
        AbstractBase::print();
        cout << this->derivedprivate1 << endl;
        ;
    }
};

int main(int argc, char *argv[])
{
    Derived d;
    d.set_privates();
    d.print();
    d.foo();
    return 0;
}
