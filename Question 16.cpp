#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Bitwise NOT (~num) = " << ~num << endl;
    cout << "Logical NOT (!num) = " << !num << endl;

    return 0;
}
