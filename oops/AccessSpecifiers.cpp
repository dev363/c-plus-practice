#include <iostream>
using namespace std;

class A
{
    // private by default
    int a = 1;

    public: int b = 2;
    protected: int c = 3;
    private: int d = 4;

    public:
        int e=10;

        void printPublic(){
            cout << "Public function" << endl;
            cout << "b: " << b << "| c: " << c << "| d: " << d << endl;
        }
        void ousidePublic();

    protected:
        void printProtected(){
            cout << "Protected function" << endl;
        }
        void ousideProtected();

    private:
        void printPrivate(){
            cout << "Private function" << endl;
        }
        void ousidePrivate();
};

 void A::ousidePublic(){
    cout << "ousidePublic function" <<endl;
 };

void A::ousideProtected(){
    cout << "ousideProtected function" <<endl;
};

void A::ousidePrivate(){
    cout << "ousidePrivate function" <<endl;
};

int main()
{
    A a1;
    // cout << "private a :" << a1.b << endl;  Not allowed (private)
    cout << "public a :" << a1.b << endl;
    // cout << "protected c :" << a1.c << endl; Not allowed (protected)
    // cout << "private d :" << a1.d << endl; Not allowed (private)
    cout << "public e :" << a1.e << endl; 

    a1.printPublic();
    // a1.printProtected();  Not allowed (protected)
    // a1.printPrivate();  Not allowed (private)

    a1.ousidePublic(); 
    // a1.ousideProtected(); Not allowed (protected)
    // a1.ousidePrivate(); Not allowed (private)
    return 0;
}