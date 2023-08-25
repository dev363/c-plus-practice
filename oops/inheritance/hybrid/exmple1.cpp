#include <iostream>
using namespace std;

class A
{
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
};
class B
{
public:
    int g = 100;
};

class BB : public A
{
    int aa = 1000;

protected:
    int bb = 200;

public:
    int cc = 300;
};
class CCC : public BB, public B
{
};

int main()
{
    BB B1;
    CCC C1;

    cout << "(BB) A class public `c' value: " << B1.c << endl;
    cout << "(CCC) B class public `g' value: " << C1.g << endl;
    cout << "(CCC) A class public `c' value: " << C1.c << endl;
    return 0;
}