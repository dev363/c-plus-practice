#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *ptr = &i;

    cout << "i address: " << &i << endl;
    cout << "i address: " << ptr << endl;
    cout << "ptr address: " << &ptr << endl;

    cout << "---------------------" << endl
         << endl;

    cout << "i value: " << i << endl;
    cout << "i value: " << *ptr << endl;
    cout << "---------------------" << endl
         << endl;

    i = 20;
    cout << "i value: " << i << endl;
    cout << "i value: " << *ptr << endl;

    cout << "---------------------" << endl
         << endl;
    *ptr = 30;
    cout << "i value: " << i << endl;
    cout << "i value: " << *ptr << endl;

    cout << "---------------------" << endl
         << endl;
    i += 1;
    cout << "i value: " << i << endl;
    cout << "i value: " << *ptr << endl;
     cout << "---------------------" << endl
         << endl;
    *ptr += 1;
    cout << "i value: " << i << endl;
    cout << "i value: " << *ptr << endl;

    return 0;
}