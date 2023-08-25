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
    Animal A1;
    Dog D1;
    Lerbra L1;
    cout << "*** Base Class Object (Animal -> A1) ****" << endl;
    // cout << "(A1) Animal Private `age` : " << A1.age << endl;
    // cout << "(A1) Animal Protected `length` : " << A1.length << endl;
    cout << "(A1) Animal Public `height` : " << A1.height << endl;
    cout << "Base Class protected and Private not access directly here" << endl;
    LinePrint();

    cout << "*** Drived Class Object (Dog -> D1) ****" << endl;
    cout << "Base Class inherit as Protected so public members also protected now" << endl;
    // cout << "(D1) Animal Private `age` : " << D1.age << endl;
    // cout << "(D1) Animal Protected `length` : " << D1.length << endl;
    // cout << "(D1) Animal Public `height` : " << D1.height << endl;
    LinePrint();

    cout << "(L1) Protected - Animal `length` access by `Dog` Public Fn:- " << L1.getAnimalProtected() << endl;
    cout << "(L1) Private - Animal `age` access by `Dog` Public Fn:- " << L1.getAnimalProtectedWithDog() << endl;
    cout << "(L1) Public - Animal `age` access by `Dog` Public Fn:- " << L1.getAnimalPublicWithDog() << endl; // its Protected Now
    LinePrint();
    return 0;
}