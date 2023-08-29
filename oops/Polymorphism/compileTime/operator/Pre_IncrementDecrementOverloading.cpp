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
};

int main()
{
    PreMethod Inc;
    Inc.display();
    ++Inc;
    Inc.display();
    --Inc;
    Inc.display();
}