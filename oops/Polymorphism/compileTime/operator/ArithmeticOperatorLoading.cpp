#include <iostream>
using namespace std;

void LineBreak(string s)
{
    cout << endl;
    cout << "-----" << s << "------" << endl;
    cout << endl;
}
class ArithmeticClass
{
    int a;
    int b;
    int c[];

public:
    ArithmeticClass()
    {
        a = 100;
        b = 200;
    }

    ArithmeticClass(int z[])
    {
        c = z;
    }
    ArithmeticClass(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a value: " << a << ", b value: " << b << endl;
    }

    // void operator+(ArithmeticClass A)
    // {
    //     cout << "Plus" << endl;
    // }

    ArithmeticClass operator+(ArithmeticClass A4)
    {
        // cout << "Plus" << endl;
        ArithmeticClass A;
        A.a = a + A4.a;
        A.b = b + A4.b;
        return A;
    }

    ArithmeticClass operator-(ArithmeticClass A4)
    {
        ArithmeticClass A;
        A.a = a - A4.a;
        A.b = b - A4.b;
        return A;
    }

    ArithmeticClass operator*(ArithmeticClass A4)
    {
        ArithmeticClass A;
        A.a = a * A4.a;
        A.b = b * A4.b;
        return A;
    }

    ArithmeticClass operator/(ArithmeticClass A4)
    {
        ArithmeticClass A;
        A.a = a / A4.a;
        A.b = b / A4.b;
        return A;
    }
};

int main()
{
    ArithmeticClass A1;
    A1.display();

    ArithmeticClass A2(10, 20);
    A2.display();

    ArithmeticClass A3;

    LineBreak("Plus (+)");
    A3 = A1 + A2;
    A3.display();

    LineBreak("Minus (-)");
    A3 = A1 - A2;
    A3.display();

    LineBreak("Multi (*)");
    A3 = A1 * A2;
    A3.display();

    LineBreak("Divide (/)");
    A3 = A1 * A2;
    A3.display();

    return 0;
}