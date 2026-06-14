#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> num1 >> num2;

    double maxVal = (num1 > num2) ? num1 : num2;

    std::cout << "The larger value is: " << maxVal << "\n";
    return 0;
}
