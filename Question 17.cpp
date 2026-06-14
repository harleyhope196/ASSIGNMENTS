#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n > 0 && (n & (n - 1)) == 0) {
        std::cout << n << " is a power of 2.\n";
    } else {
        std::cout << n << " is NOT a power of 2.\n";
    }

    return 0;
}
