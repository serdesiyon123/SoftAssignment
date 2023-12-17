#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int reversed = 0;
    int temp = n; // temp is a copy of  n  and let n = 12321
    while(temp != 0) {
        reversed = reversed * 10 + temp % 10; // 1st iteration reversed = 0 * 10 + 12321 % 10 = 1
                                              // 2nd iteration reversed = 1 * 10 + 1232 % 10 = 12
                                              // 3rd iteration reversed = 12 * 10 + 123 % 10 = 123
                                              // 4th iteration reversed = 123 * 10 + 12 % 10 = 1232
                                              // 5th iteration reversed = 1232 * 10 + 1 % 10 = 12321
        temp /= 10;
    }

    if(reversed == n) // check if the reversed number is equal to the original number
        std::cout << "Palindrome" << std::endl;
    else
        std::cout << "Not Palindrome" << std::endl;

    return 0;
}