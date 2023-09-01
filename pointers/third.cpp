#include <iostream>
using namespace std;

int callMe(int j)
{

    cout << "i address in Function: " << &j << endl;
    j = 20;
    cout << "i value in Function: " << j << endl;
    return j;
}

int callMe2(int &j)
{

    cout << "i address in Function: " << &j << endl;
    j = 30;
    cout << "i value in Function: " << j << endl;
    return j;
}

int callMe3(int *j)
{

    cout << "i address in Function: " << j << endl;
    *j = 40;
    cout << "i value in Function: " << *j << endl;
    return *j;
}

int main()
{

    int i = 10;

    cout << "----------Pass By Value----------" << endl
         << endl;
    cout << "i value before Fn Call: " << i << endl;
    cout << "i address: " << &i << endl;
    callMe(i);
    cout << "i value after Fn Call: " << i << endl
         << endl;

    cout << "----------Pass By Refference (1)----------" << endl;
    cout << "i value before Fn Call: " << i << endl;
    cout << "i address: " << &i << endl;
    callMe2(i);
    cout << "i value after Fn Call: " << i << endl
         << endl;

    cout << "----------Pass By Refference (2)----------" << endl;
    cout << "i value before Fn Call: " << i << endl;
    cout << "i address: " << &i << endl;
    callMe3(&i);
    cout << "i value after Fn Call: " << i << endl
         << endl;

    return 0;
}