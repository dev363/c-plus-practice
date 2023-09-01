#include <iostream>
using namespace std;

int main()
{
    // Initialization of local variables
    int x = 1, y = 2, z = 3;

    cout << "x : " << x << " y: " << y << " z: " << z << endl;
    {

        // changing the variables x & y
        int x = 10;
        float y = 20;

        cout << "x : " << x << " y: " << y << " z: " << z << endl;
        {

            // changing z
            int z = 100;
            cout << "x : " << x << " y: " << y << " z: " << z << endl;
        }
    }
    return 0;
}
