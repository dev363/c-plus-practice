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

class Dog : public Animal
{
public:
    int getAnimalProtected()
    {
        return length;
    }
};

class Lerbra : public Dog
{
};

int main()
{
    Animal A1;
    Dog D1;
    Lerbra L1;
    cout << "*** Base Class Object (Animal -> A1) ****" << endl;
    // cout << "(A1) Animal Private `age` : " << A1.age << endl; // Error Private
    // cout << "(A1) Animal Protected `length` : " << A1.length << endl; // Protected access only in drived class not outside
    cout << "(A1) Animal Public `height` : " << A1.height << endl;
    cout << "Base Class protected and Private not access directly here" << endl;
    LinePrint();

    cout << "*** Drived Class Object (Dog -> D1) ****" << endl;
    // cout << "Base Class inherit as Public so public members also public in drived class" << endl;
    // cout << "(D1) Animal Private `age` : " << D1.age << endl; // Error Private
    // cout << "(D1) Animal Protected `length` : " << D1.length << endl; // Protected access only in drived class not outside
    cout << "(D1) Animal Public `height` : " << D1.height << endl;
    LinePrint();

    cout << "(L1) Pubic - Animal `height`:- " << L1.height << endl;
    cout << "(L1) Protected - Animal `length` access by `Dog` Public Fn:- " << L1.getAnimalProtected() << endl;
    cout << "(L1) Private - Animal `age` access by `Animal` Public Fn:- " << L1.getAnimalPrivate() << endl;
    LinePrint();

    return 0;
}