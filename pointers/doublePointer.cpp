#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << "------------------------\n";
    cout << "i value by i: " << i << endl;
    cout << "i value by *ptr: " << *ptr << endl;
    cout << "i value by **ptr: " << **ptr2 << endl;

    cout << "------------------------\n";

    cout << "i address by &i: " << &i << endl;
    cout << "i address by ptr: " << ptr << endl;
    cout << "i address by *ptr2: " << *ptr2 << endl;

    cout << "\n---------I value Changed By *ptr------------\n";

    *ptr = 12;
    cout << "i value by i: " << i << endl;
    cout << "i value by *ptr: " << *ptr << endl;
    cout << "i value by **ptr: " << **ptr2 << endl;

    cout << "\n---------I value Changed By **ptr------------\n";

    **ptr2 = 15;
    cout << "i value by i: " << i << endl;
    cout << "i value by *ptr: " << *ptr << endl;
    cout << "i value by **ptr: " << **ptr2 << endl;

    cout << "\n---------**ptr2------------\n";

    cout << "&ptr2 value: " << &ptr2 << endl;
    cout << "ptr2 value: " << ptr2 << endl;
    cout << "&ptr value: " << &ptr << endl;
    cout << "*ptr2 value: " << *ptr2 << endl;
    cout << "**ptr2 value: " << **ptr2 << endl;
    return 0;
}