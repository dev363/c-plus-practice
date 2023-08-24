#include <iostream>
using namespace std;

void LinePrint()
{
    cout << endl;
    cout << "-----------" << endl;
    cout << endl;
}

class Dog
{
    int Dogage = 20;

protected:
    int Doglength = 30;

public:
    int Dogheight = 40;
    int getDogPrivate()
    {
        return Dogage;
    }
};

class Loin
{
    int Loinage = 50;

protected:
    int Loinlength = 60;

public:
    int Loinheight = 70;
    int getLoinPrivate()
    {
        return Loinage;
    }
};

class Animal : public Dog, private Loin
{
private:
    int Animalage = 100;

protected:
    int Animallength = 150;

public:
    int Animalheight = 200;

    void getDogProtectedInAnimal()
    {
        cout << "(A1) Base Class Protected Dog `length` in Drived Class:-" << Doglength << endl;
    }
    void getDogPrivateInAnimal()
    {
        // return Dogage; // Error Dogage is private variable
        cout << "(A1) Base Class Private Dog `age` in Drived Class:- No Acceesable" << endl;
    }

    void getLoinPublicInAnimal()
    {
        cout << "(A1) Base Class Public Loin `height` in Drived Class:-" << Loinheight << endl;
    }

    void getLoinProtectedInAnimal()
    {
        cout << "(A1) Base Class Protected Loin `length` in Drived Class:-" << Loinlength << endl;
    }
    void getLoinPrivateInAnimal()
    {
        // return Loinage; // Error Dogage is private variable
        cout << "(A1) Base Class Private Loin `age` in Drived Class:- No Acceesable" << endl;
    }
};

int main()
{

    Animal A1;
    Dog D1;
    Loin L1;

    cout << "(D1) Public Dog height:- " << D1.Dogheight << endl;
    // cout << "(D1) Protected Dog length:- " << D1.Doglength << endl; // Error
    // cout << "(D1) Private Dog age:- " << D1.Dogage << endl;  // Error
    cout << "(D1) Private Dog age with Public Fn:- " << D1.getDogPrivate() << endl;
    LinePrint();

    cout << "(L1) Public Loin height:- " << L1.Loinheight << endl;
    // cout << "(L1) Protected Loin length:- " << L1.Loinlength << endl; // Error
    // cout << "(L1) Private Loin age:- " << L1.Loinage << endl;  // Error
    cout << "(L1) Private Loin age with Public Fn:- " << L1.getLoinPrivate() << endl;
    LinePrint();

    cout << "*** `Dog` inherit as Public method ***" << endl;
    cout << "(A1) Public Dog height:- " << A1.Dogheight << endl;
    // cout << "(A1) Protected Dog length:- " << A1.Doglength << endl; // Error
    // cout << "(A1) Private Dog age:- " << A1.Dogage << endl; // Error
    A1.getDogProtectedInAnimal();
    A1.getDogPrivateInAnimal();

    LinePrint();

    cout << "*** `Loin` inherit as Private method ***" << endl;
    // cout << "(A1) Public Loin height:- " << A1.Loinheight << endl; // Error its private now
    // cout << "(A1) Protected Loin length:- " << A1.Loinlength << endl; // Error its private now
    // cout << "(A1) Private Loin age:- " << A1.Loinage << endl; // Error its private now
    A1.getLoinPublicInAnimal();
    A1.getLoinProtectedInAnimal();
    A1.getLoinPrivateInAnimal();

    return 0;
}
