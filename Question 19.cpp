#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    // Step 1: Convert Binary to Decimal first
    int decimal = 0;
    int base = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += std::pow(2, base);
        }
        base++;
    }

    // Step 2: Output transformations using standard formatting streams
    std::cout << "\n--- Conversion Results ---\n";
    std::cout << "Decimal:     " << std::dec << decimal << "\n";
    std::cout << "Octal:       " << std::oct << decimal << "\n";
    std::cout << "Hexadecimal: " << std::hex << std::uppercase << decimal << "\n";

    return 0;
}
