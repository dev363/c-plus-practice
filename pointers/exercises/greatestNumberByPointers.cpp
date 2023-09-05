#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int *p, *q, *r;
    p = &a;
    q = &b;
    r = &c;
    cout << "Enter a value \n";
    cin >> a;
    cout << "Enter b value \n";
    cin >> b;
    cout << "Enter c value \n";
    cin >> c;
    if (*p > *q)
    {
        cout << "A is Greater : " << *p << endl;
    }
    else if (*q > *r)
    {

        cout << "B is Greater : " << *q << endl;
    }
    else
    {

        cout << "C is Greater : " << *r << endl;
    }
    return 0;
}