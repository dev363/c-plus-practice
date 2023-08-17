#include <iostream>
using namespace std;

int main()
{
    char a = 'A';
    char b = 65;

    cout << "char a = " << a << endl;
    cout << "ASCII value = " << int(a) << endl;
    cout << "ASCII value to char = " << b << endl;
    cout << "-----------------------" << endl;

    char str[] = "C++";
    char str2[4] = "C++";
    char str3[] = "C++ Language";
    char str4[4] = {'C', '+', '+', '\0'};

    cout << "char str = " << str << endl;
    cout << "char str2 = " << str2 << endl;
    cout << "char str3 = " << str3 << endl;
    cout << "char str4 = " << str4 << endl;
    cout << "-----------------------" << endl;
    return 0;
}