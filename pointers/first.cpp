#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int* ptr;
    cout << "i value: " << i << endl;

    *ptr = 12;
    cout << "*ptr value: " << *ptr << endl;
    
    ptr = &i;
    cout << "*ptr value: " << *ptr << endl;
    cout << "&i value: " << &i << endl;
    cout << "ptr value: " << ptr << endl;
    cout << "&ptr value: " << &ptr << endl;

    return 0;
}