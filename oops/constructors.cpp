#include <iostream>
using namespace std;

// Note: The constructor has the same name as the class, it is always public,
// and it does not have any return value.

class A
{
public:
    int a;
    int b;

    A()
    {
        cout << "constructor called (Without Parmas)" << endl;
        a = 12;
        b = 15;
    }
    A(int x)
    {
        cout << "constructor called (With 1 Parmas)" << endl;
        a = x;
        b = 15;
    }
    A(int x, int y)
    {
        cout << "constructor called (With 2 Parmas)" << endl;
        a = x;
        b = y;
    }

    void print()
    {
        cout << "a value: " << a << endl;
        cout << "b value: " << b << endl;
    }
    A(double x);
};

A::A(double x)
{
    cout << "Outside Class constructor. " << x;
}

int main()
{
    A a1;
    A a2(10);
    A a3(100, 200);
    A a4(15.50);
    a1.print();
    a2.print();
    a3.print();
}