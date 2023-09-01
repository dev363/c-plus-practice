#include <iostream>
using namespace std;

class ArraySubscript
{
    int list[2];

public:
    ArraySubscript(int i, int j)
    {
        list[0] = i;
        list[1] = j;
    }

    void print()
    {
        cout << "List index 0 value: " << list[0] << endl;
    }

    int operator[](int index)
    {
        return list[index];
    }
};
int main()
{
    ArraySubscript A1(100, 200);
    A1.print();
    cout << A1[0] << endl;
    return 0;
}