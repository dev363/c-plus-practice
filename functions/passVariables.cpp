#include <iostream>
using namespace std;

void printThis(int a)
{
    cout << "You pass Value: " << a << endl;
}

void defaultValue(string country = "india")
{
    cout << "You pass country: " << country << endl;
}

int returnValue(int i)
{
    return i + 1;
}

int main()
{
    printThis(1);
    defaultValue();
    defaultValue("canada");

    cout << "Return Value (int+1): " << returnValue(2) << endl;
}