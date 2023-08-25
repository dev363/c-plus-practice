// C++ program demonstrating ambiguity in Multipath
// Inheritance

#include <iostream>
using namespace std;

class ClassA
{
public:
    int a;
};

class ClassB : public ClassA
{
public:
    int b;
};

class ClassC : public ClassA
{
public:
    int c;
};

class ClassD : public ClassB, public ClassC
{
public:
    int d;
};

int main()
{
    ClassD obj;

    // ERROR: Because ClassD has 2 copies of a , one from classB and second from ClassC
    // obj.a = 10; // Statement 1, Error 
    // obj.a = 100;	// Statement 2, Error

    obj.ClassB::a = 10;  // Statement 3
    obj.ClassC::a = 100; // Statement 4

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "a from ClassB : " << obj.ClassB::a << endl;
    cout << "a from ClassC : " << obj.ClassC::a << endl;

    cout << "b : " << obj.b << endl;
    cout << "c : " << obj.c << endl;
    cout << "d : " << obj.d << endl;
}
