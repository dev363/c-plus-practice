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

class Dog : protected Animal
{
    int age = 12;

public:
    void getDogAge()
    {
        cout << "Dog Age: " << age << endl;
    }

    void getAnimalAgeWithChildClass()
    {
        getAnimalAge();
    }
};

int main()
{
    Dog c1;
    // c1.getAnimalAge();   // Not able to access | Now it private member of Dog
    c1.getAnimalAgeWithChildClass(); // You could access this like this 
    c1.getDogAge();
    return 0;
}