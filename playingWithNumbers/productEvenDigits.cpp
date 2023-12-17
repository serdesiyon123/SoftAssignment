#include <iostream>

int main() {
    int n, product = 1;
    std::cout << "Enter a number: ";
    std::cin >> n; // let n = 123456
    while (n > 0) {
        int digit = n % 10; // get last digit = 6
        if (digit % 2 == 0) { // 6 % 2 == 0
            product *= digit; // product = 1 * 6 = 6
        }
        n /= 10; // n = 12345
    }
    std::cout << "Product of even digits: " << product << std::endl;
    return 0;
}
