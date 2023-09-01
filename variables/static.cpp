#include <iostream>
using namespace std;

void func()
{
    static int i = 0; // static variable
    int j = 0;        // local variable
    i++;
    j++;
    cout << "stattic i=" << i << " and local j=" << j << endl;
}
int main()
{
    func();
    func();
    func();
}