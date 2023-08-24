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

class Dog : public Animal
{
public:
    int getAnimalProtected()
    {
        return length;
    }
    // int getAnimalPrivate2()   // Error age private
    // {
    //     return age + 1;
    // }
};

int main()
{
    Dog c1;
    // cout << "Private - Animal Age:- " << c1.age << endl; // Error age private
    cout << "Private - Animal Age:- " << c1.getAnimalPrivate() << endl;
    // cout << "Private - Animal Age:- " << c1.getAnimalPrivate2() << endl; // Error age private
    // cout << "Protected - Animal length:- " << c1.length << endl; // Error length protected
    cout << "Protected - Animal length:- " << c1.getAnimalProtected() << endl;
    cout << "Public - Animal height:- " << c1.height << endl;

    return 0;
}