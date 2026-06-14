#include <iostream>
using namespace std;

int main()
{
    int x, y;

    // Assignment operator
    x = 10;
    y = 10;

    cout << "Value of x = " << x << endl;
    cout << "Value of y = " << y << endl;

    // Equality operator
    if (x == y)
    {
        cout << "x and y are equal" << endl;
    }
    else
    {
        cout << "x and y are not equal" << endl;
    }

    return 0;
}
