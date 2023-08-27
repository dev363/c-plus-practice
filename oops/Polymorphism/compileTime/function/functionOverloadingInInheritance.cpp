#include <iostream>
using namespace std;

class Shape
{

public:
    virtual void draw()
    {
        cout << "Draw Shape..." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Draw Circle ..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Draw Rectangle..." << endl;
    }
};

int main()
{
    Shape S1;
    Circle C1;
    Rectangle R1;
    C1.draw(); // Draw Circle ...
    R1.draw(); // Draw Rectangle...
    S1.draw(); // Draw Shape...

    return 0;
}