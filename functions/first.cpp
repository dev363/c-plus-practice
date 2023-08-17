#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

// Driver code
int main()
{
    // Calling sum function and
    // storing its value in add variable
    int add = sum(10, 30);

    cout << "Sum :" << add << endl;
    return 0;
}