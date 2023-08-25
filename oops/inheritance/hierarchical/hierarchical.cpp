#include <iostream>
using namespace std;

class A
{
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
    int getPrivate()
    {
        return a;
    }
};

class AA : public A
{
};
class BB : public A
{
};

class AAA : public AA
{
public:
    int getProtected()
    {
        return b;
    }
};

class BBB : public AA
{
};

class CCC : public BB
{
};

class DDD : public BB
{
};

int main()
{

    A A1;
    AAA A2;
    cout << "(A) A class public `c` value: " << A1.c << endl;
    cout << "(AAA) A class public `c` value: " << A2.c << endl;
    cout << "(AAA) A class protected `b` value: " << A2.getProtected() << endl;
    cout << "(A) A class private `a` value with public function: " << A1.getPrivate() << endl;
    return 0;
}