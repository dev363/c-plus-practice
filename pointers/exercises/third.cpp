#include <iostream>
using namespace std;

int main()
{
    int i;
    int *ptr = &i;
    cout << "Enter Number" << endl;
    cin >> i;
    cout << "Your entered Value by variable: " << i << endl;
    cout << "Your entered Value by Pointer: " << *ptr << endl;
    cout << "Your entered Value by i address: " << *(&i) << endl;
    return 0;
}