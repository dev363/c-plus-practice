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

class Dog : private Animal
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

    cout << "*** Base Class Object ****" << endl;
    // cout << "(A1) Animal Private `age` : " << A1.age << endl;
    // cout << "(A1) Animal Protected `length` : " << A1.length << endl;
    cout << "(A1) Animal Public `height` : " << A1.height << endl;
    cout << "Base Class protected and Private not access directly here" << endl;
    LinePrint();

    cout << "*** Drived Class Object ****" << endl;
    cout << "Base Class inherit as Private so no member access directly" << endl;
    // cout << "(D1) Animal Private `age` : " << D1.age << endl;
    // cout << "(D1) Animal Protected `length` : " << D1.length << endl;
    // cout << "(D1) Animal Public `height` : " << D1.height << endl;
    LinePrint();

    // cout << "(L1) Private - Animal Age:- " << L1.age << endl; // Error age private
    // cout << "(L1) Protected - Animal length:- " << L1.length << endl; // Error length private
    // cout << "(L1) Pubic - Animal `height`:- " << L1.height << endl; // Error public age is private Now

    cout << "(L1) Protected - Animal `length` access by `Lerbra` Public Fn:- " << L1.getAnimalProtected() << endl;
    cout << "(L1) Private - Animal `age` access by `Lerbra` Public Fn:- " << L1.getAnimalProtectedWithDog() << endl;
    cout << "(L1) Public - Animal `age` access by `Lerbra` Public Fn:- " << L1.getAnimalPublicWithDog() << endl; // its Protected Now
    LinePrint();
    return 0;
}