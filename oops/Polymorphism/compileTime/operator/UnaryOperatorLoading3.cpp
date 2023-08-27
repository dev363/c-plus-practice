#include <iostream>
#include <string>
using namespace std;

struct YouTube
{
    string Name;
    int TotalSubscribers;

    YouTube(string name, int totalSubscribers)
    {
        Name = name;
        TotalSubscribers = totalSubscribers;
    }
};

ostream& operator<<(ostream &COUT, YouTube &YT)
{
    COUT << "Name: " << YT.Name << endl;
    COUT << "Total Subscribers: " << YT.TotalSubscribers << endl;
    return COUT;
}

int main()
{
    YouTube yt1("Code My Job", 1000);
    YouTube yt2("C++ Learning", 100000);
    cout << yt1 << yt2 ;
    cout << "Say" << " " << "Hello" ;
    return 0;
}
