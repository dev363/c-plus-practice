#include <iostream>
using namespace std;

int main(void)
{
    int i = 10;
    int j = 20;
    /* constant pointer to integer */
    int *const ptr = &i;

    cout << "ptr value: " << *ptr << endl;

    *ptr = 100; /* valid */
    cout << "ptr value: " << *ptr << endl;

    // ptr = &j; /* error */
    return 0;
}