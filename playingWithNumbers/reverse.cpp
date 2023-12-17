#include <iostream>

int main() {
    int number, reverse = 0, remainder;
    std::cout << "Enter a number: ";
    std::cin >> number;
    while (number != 0) { // let number = 123
        remainder = number % 10; // remainder = 123 % 10 = 3
        reverse = reverse * 10 + remainder; // reverse = 0 * 10 + 3 = 3
        number /= 10; // number = 123 / 10 = 12
    }
    std::cout << "Reversed number: " << reverse << std::endl;
    return 0;
}