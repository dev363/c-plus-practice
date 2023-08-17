#include <iostream>
using namespace std;

int g = 10; // global variable

int main()
{
    // declaration  a
    int a;
    cout << "int a value before initialize: " << a << endl;
    // initialisation of a
    a = 10;
    cout << "inta value after initialize: " << a << endl;

    char b;
    cout << "char b value before initialize: " << b << endl;
    b = 'b';
    cout << "char b value after initialize: " << b << endl;

    char c = 'E';
    cout << "char c value declare and initialize same time: " << c << endl;

    // const int e; error
    // e= 2333; error
    const int e = 123;
    cout << "const variable value: " << e << endl;

    cout << "global variable value: " << g << endl;

    g = 15;
    cout << "global variable value: " << g << endl;

    return 0;
}