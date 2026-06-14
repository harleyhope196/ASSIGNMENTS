#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Original number = " << num << endl;
    cout << "Left Shift by 1 (num << 1) = " << (num << 1) << endl;
    cout << "Right Shift by 1 (num >> 1) = " << (num >> 1) << endl;

    return 0;
}
