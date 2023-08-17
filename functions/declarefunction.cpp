
#include <iostream>
using namespace std;

void myFunction(); // if we not declare function before main then it falls errors

int main()
{
    myFunction();
    return 0;
}

void myFunction()
{
    cout << "I just got executed!";
}