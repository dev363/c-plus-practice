#include <iostream>
using namespace std;

int main()
{
    {
        int x = 10, y = 20;
        {
            // The outer block contains
            // declaration of x and
            // y, so following statement
            // is valid and prints
            // 10 and 20
            cout << "x : " << x << " y: " << y << endl;
            {
                // y is declared again,
                // so outer block y is
                // not accessible in this block
                int y = 40;

                // Changes the outer block
                // variable x to 11
                x++;

                // Changes this block's
                // variable y to 41
                y++;

                 cout << "x : " << x << " y: " << y << endl;
            }

            // This statement accesses
            // only outer block's
            // variables
             cout << "x : " << x << " y: " << y << endl;
        }
    }
    return 0;
}
