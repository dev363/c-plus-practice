#include <iostream>
using namespace std;

class Hello
{

public:
    int i, j;

    void setValue(int x, int y)
    {
        i = x;
        j = y;
    }
    void getValue()
    {
        cout << "`i` Value: " << i << " , `j` Value: " << j << endl;
    }
    void getValue(int x)
    {
        cout << "`x` Value: " << x << endl;
    }

     void getValue(double x)
    {
        cout << "`x` double Value: " << x << endl;
    }

    void getValue(int x, int y)
    {
        cout << "`x` Value: " << x << " , `y` Value: " << y << endl;
    }
};

int main()
{
    Hello H1;
    H1.getValue(); // its retur garbage value
    H1.setValue(10, 12);
    H1.getValue();
    H1.getValue(100);
    H1.getValue(100.12);
    H1.getValue(200, 2001);
    return 0;
}