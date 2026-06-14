#include <iostream>

int main() {
    int x, y;
    std::cout << "Enter value for X and Y: ";
    std::cin >> x >> y;

    std::cout << "Before swap: X = " << x << ", Y = " << y << "\n";

    // XOR Swap algorithm
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    std::cout << "After swap: X = " << x << ", Y = " << y << "\n";
    return 0;
}
