#include <iostream>
using namespace std;

int main(void)
{
    const int i = 10;
    cout << "ptr value: " << i << endl;

    // i = 20; // error const value can't change
    const int *ptr = &i;
    cout << "ptr value: " << *ptr << endl;

    // *ptr=12; // error : Not Allowed const pointer also can't change value
    return 0;
}