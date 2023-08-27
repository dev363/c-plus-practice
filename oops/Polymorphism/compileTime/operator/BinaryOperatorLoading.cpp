#include <iostream>
using namespace std;

class Plus
{
public:
    int a;
    int b;

public:
    Plus(){};
    Plus(int x, int y)
    {
        a = x;
        b = y;
    }
    Plus operator+(Plus obj)
    {
        Plus temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }

    void display()
    {
        cout << "Result a= " << a << " Result b= " << b << endl;
    }
};

int main()
{
    Plus P1(10, 12);
    Plus P2(100, 120);

    Plus P3;
    P3 = P1 + P2;

    P3.display();

    cout << "A after + =" << P3.a << endl;
    cout << "B after + =" << P3.b << endl;

    return 0;
}
