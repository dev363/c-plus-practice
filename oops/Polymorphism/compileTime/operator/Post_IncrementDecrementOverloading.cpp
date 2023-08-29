#include <iostream>
using namespace std;

class PostMethod
{
private:
    int i = 1;

public:
    void display()
    {
        cout << "i value: " << i << endl;
    }

    PostMethod operator++()
    {
        PostMethod temp(*this); // Create a copy of the current object
        ++i;                // Increment the i
        return temp;
    }

    PostMethod operator--()
    {
        PostMethod temp(*this); // Create a copy of the current object
        --i;                // decrement the i
        return temp;
    }
};

int main()
{
    PostMethod Inc;
    Inc.display();
    ++Inc;
    Inc.display();
    --Inc;
    Inc.display();
}