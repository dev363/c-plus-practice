#include <iostream>
using namespace std;

class Hello
{
protected:
    int x;

public:
    Hello() {}
    void fun() const
    {
        cout << "fun() const called " << endl;
    }

    void fun() { cout << "fun() called " << endl; }
};

int main()
{
    Hello H1;
    const Hello H2;
    H1.fun();
    H2.fun();
    return 0;
}
