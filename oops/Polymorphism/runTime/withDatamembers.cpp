#include <iostream>
using namespace std;

class Animal
{
public:
    string color = "Black";
};

class Dog : public Animal
{
public:
    string color = "Grey";
};

int main(void)
{
    Animal d = Dog(); // its return black because we created Dog object with Animal instance
    Dog d2;   // its return Gray
    cout << d.color;
    cout << endl;
    cout << d2.color;
}