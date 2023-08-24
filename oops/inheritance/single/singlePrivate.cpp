#include <iostream>
using namespace std;

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
    int getAnimalPublic()
    {
        return height;
    }
    int getAnimalProtected()
    {
        return length;
    }
    int getAnimalPrivate2() // Error age private
    {
        return getAnimalPrivate();
    }
};

int main()
{
    Dog c1;
    // age, length, height all are now private not access outside class
    // cout << "Public - Animal Height:- " << c1.getAnimalPublic() << endl;
    // cout << "Protected - Animal length:- " << c1.getAnimalProtected() << endl;
    cout << "Private - Animal Height:- " << c1.getAnimalPublic() << endl;
    cout << "Protected - Animal length:- " << c1.getAnimalProtected() << endl;
    cout << "Public - Animal Age:- " << c1.getAnimalPrivate2() << endl;

    return 0;
}