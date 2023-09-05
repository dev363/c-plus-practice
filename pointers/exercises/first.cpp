#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, c = 12, d, e;
    int *p = &a, *q = &b, *r = &c;
    d = q - p;
    e = r - p;
    cout << q << " | " << p << " | " << d << endl;
    cout << r << " | " << p << " | " << e << endl;

    return 0;
}