#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    int decimal = 0;
    int base = 0;

    // Traverse the string from right to left
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += std::pow(2, base);
        }
        base++;
    }

    std::cout << "Decimal equivalent: " << decimal << "\n";
    return 0;
}
