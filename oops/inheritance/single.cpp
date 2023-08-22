#include <iostream>
using namespace std;

class BaseClass
{
    int a = 10;

public:
    void getBaseClassA()
    {
        cout << "BaseClass A value: " << a << endl;
    }
};

class ChildClass : public BaseClass
{
    int a = 12;

public:
    void getChildClassA()
    {
        cout << "ChildClass A value: " << a << endl;
    }
};

int main()
{
    ChildClass c1;
    c1.getChildClassA();
    c1.getBaseClassA();
    return 0;
}