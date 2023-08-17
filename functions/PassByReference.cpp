#include <iostream>
using namespace std;

void swapNums(int &x, int &y)
{
    // cout << "Hello : " << x << y << endl;
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap " << endl;
    cout << "firstNum : " << firstNum << endl;
    cout << "secondNum : " << secondNum << endl;

    swapNums(firstNum, secondNum);

    cout << "After swap " << endl;
    cout << "firstNum : " << firstNum << endl;
    cout << "secondNum : " << secondNum << endl;

    return 0;
}