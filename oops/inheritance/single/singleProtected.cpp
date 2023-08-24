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

class Dog : protected Animal
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
    // cout << "Private - Animal Age:- " << c1.age << endl; // Error age private
    // cout << "Protected - Animal length:- " << c1.length << endl; // Error length protected
    // cout << "Public - Animal height:- " << c1.height << endl; // Error public height is now protected because class inherit by protected method

    cout << "Public - Animal Height:- " << c1.getAnimalPublic() << endl;
    cout << "Protected - Animal length:- " << c1.getAnimalProtected() << endl;
    cout << "Private - Animal Age:- " << c1.getAnimalPrivate2() << endl;

    return 0;
}