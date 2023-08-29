#include <iostream>
using namespace std;

class PreMethod
{
private:
    int i = 1;

public:
    void display()
    {
        cout << "i value: " << i << endl;
    }

    PreMethod operator++()
    {
        ++i;
        return *this;
    }

    PreMethod operator--()
    {
        --i;
        return *this;
    }

    friend ostream &operator<<(ostream &COUT, const PreMethod &Pre)
    {
        COUT << Pre.i;
        return COUT;
    }
};

int main()
{
    PreMethod Inc;
    Inc.display();
    ++Inc;
    Inc.display();
    --Inc;
    Inc.display();
    cout << "i value during Pre Increment: " << ++Inc << endl;
    cout << "i value during Pre Decrement: " << --Inc << endl;
}