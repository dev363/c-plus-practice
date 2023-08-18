#include <iostream>
using namespace std;

class MyClass
{
public:
    int printMe();
};

int MyClass::printMe()
{
    cout << "I am defined by Scope Resolution Operator outside class." << endl;
    return 1;
}

int main()
{
    MyClass c1;
    int i = c1.printMe();

    cout << "Returned Value: " << i << endl;
    return 0;
}