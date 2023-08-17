#include <iostream>
using namespace std;

void passArray(int a[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "\n";
    }
}

void passArray2(int a[])
{
    for (int i = 0; a[i] >= 0; i++)
    {
        cout << a[i] << "\n";
    }
}

int main()
{
    int b[5] = {10, 20, 30, 40, 50};
    int c[] = {100, 200, 300, 400, 0, 600};
    passArray(b);
    passArray2(c);
    return 0;
}