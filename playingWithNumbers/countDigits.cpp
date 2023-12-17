#include <iostream>

int main() {
    int number,count;
    std::cout << "Enter a number: ";
    std::cin >> number; // let number = 12549

    for (count = 0; number != 0; count++) {
        number /= 10;   // 1st iteration number = 12549 / 10 = 1254,
                        // 2nd iteration number = 1254 / 10 = 125,
                        // 3rd iteration number = 125 / 10 = 12,
                        // 4th iteration number = 12 / 10 = 1,
                        // 5th iteration number = 1 / 10 = 0
                        // print the number of iterations or count
    }

    std::cout << "Number of digits: " << count << std::endl;
    return 0;
}