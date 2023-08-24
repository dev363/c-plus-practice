#include <iostream>
using namespace std;

void LinePrint()
{
    cout << endl;
    cout << "-----------" << endl;
    cout << endl;
}

class Animal
{
    int age = 20;

protected:
    int length = 30;

public:
    int height = 40;
    int getAnimalPrivate()
    {
        return age;
    }
};

class Dog : protected Animal
{
public:
    int getAnimalProtected()
    {
        return length;
    }
    int getAnimalPublicWithDog()
    {
        return height;
    }
    int getAnimalProtectedWithDog()
    {
        return getAnimalPrivate();
    }
};

class Lerbra : public Dog
{
};

int main()
{
    LinePrint();
    Lerbra L1;
    // cout << "Private - Animal Age:- " << L1.age << endl; // Error age private
    // cout << "Protected - Animal length:- " << L1.length << endl; // Error age Protected
    // cout << "(L1) Pubic - Animal `height`:- " << L1.height << endl; // Error public age is protected Now

    cout << "(L1) Protected - Animal `length` access by `Dog` Public Fn:- " << L1.getAnimalProtected() << endl;
    cout << "(L1) Private - Animal `age` access by `Dog` Public Fn:- " << L1.getAnimalProtectedWithDog() << endl;
    cout << "(L1) Public - Animal `age` access by `Dog` Public Fn:- " << L1.getAnimalPublicWithDog() << endl; // its Protected Now
    // cout << "(L1) Private - Animal `age` access by `Animal` Public Fn:- " << L1.getAnimalPrivate() << endl; // its Protected Now
    LinePrint();
    return 0;
}