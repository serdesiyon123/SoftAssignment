#include <iostream>

int main() {
    int number, sum = 0, remainder;
    std::cout << "Enter a number: ";
    std::cin >> number;
    while (number != 0) { // let number = 456
        remainder = number % 10; // remainder = 456 % 10 = 6 , second iteration: remainder = 45 % 10 = 5, third iteration: remainder = 4 % 10 = 4
        sum += remainder; // sum = 0 + 6 = 6 , second iteration: sum = 6 + 5 = 11, third iteration: sum = 11 + 4 = 15
        number /= 10; // number = 456 / 10 = 45 , second iteration: number = 45 / 10 = 4
    }
    std::cout << "Sum of digits: " << sum << std::endl;
    return 0;
}
