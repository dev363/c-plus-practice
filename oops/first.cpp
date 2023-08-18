#include <iostream>
using namespace std;

class Hello
{
    int a = 10;

public:
    int b = 12;
    string c = "Hello";
    void print()
    {
        cout << "a Value: " << a << endl;
    }
};

int main()
{
    Hello h1;
    h1.print();

    ++h1.b;
    // cout << "b value: " << h1.a << endl;  // Private member not acessable out of class
    cout << "b value: " << h1.b << endl;
    cout << "c value: " << h1.c << endl;
    return 0;
}