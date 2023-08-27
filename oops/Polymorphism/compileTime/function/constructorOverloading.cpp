#include <iostream>
using namespace std;

class Hello
{
public:
    Hello()
    {
        cout << "Constructor Without Parameters" << endl;
    }

    Hello(int i)
    {
        cout << "Constructor `i` value : " << i << endl;
    }

    // Hello(int i, int j)
    // {
    //     cout << "Constructor `i` and `j` values : " << i << j << endl;
    // }
    Hello(int i, int j);
};

Hello::Hello(int i, int j)
{
    cout << "Constructor `i` and `j` values : " << i << j << endl;
}

int main()
{
    Hello A1;
    Hello A2(10);
    Hello A3(10, 30);
    Hello A4('A'); // its return A Ascii value A= 65
    return 0;
}