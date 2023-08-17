#include <iostream>
using namespace std;

void print(int a)
{
    cout << "print(int a) : " << a << endl;
}

void print(int a, int b)
{
    cout << "print(int a, int b) : " << a << " | " << b << endl;
}

void print(int a, int b, int c)
{
    cout << "print(int a, int b, int c) : " << a << " | " << b << " | " << c << endl;
}

void print(double a)
{
    cout << "print(double a) : " << a << endl;
}

void print(char a[])
{
    cout << "print(double a) : " << a << endl;
}
int main()
{
    print(1);
    print(1, 2);
    print(1, 2, 3);
    print(1.0900);
    print("Hello Word");
    return 0;
}