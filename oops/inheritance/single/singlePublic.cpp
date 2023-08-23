#include <iostream>
using namespace std;

class Animal
{
    int age = 20;

public:
    void getAnimalAge()
    {
        cout << "Animal Age: " << age << endl;
    }
};

class Dog : public Animal
{
    int age = 12;

public:
    void getDogAge()
    {
        cout << "Dog Age: " << age << endl;
    }
};

int main()
{
    Dog c1;
    c1.getAnimalAge();
    c1.getDogAge();
    return 0;
}