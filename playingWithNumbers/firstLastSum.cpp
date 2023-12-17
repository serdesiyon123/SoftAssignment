#include <iostream>
#include <cmath>

int main() {
    int n ;
    std::cout << "Enter a number: ";
    std::cin >> n; // let n = -12549
    n = abs(n); // n = 12549
    int first = n ;
    while(first >= 10){ // 1st iteration first = 12549 / 10 = 1254,
                        // 2nd iteration first = 1254 / 10 = 125,
                        // 3rd iteration first = 125 / 10 = 12,
                        // 4th iteration first = 12 / 10 = 1, take this one after that it will be zero
                        // 5th iteration first = 1 / 10 = 0 , first less than 10
        first/= 10;
    }
    int last = n % 10;

    std::cout << "First Digit: " << first << "\n"
              << "Last Digit: " << last << "\n"
              << "Sum: " <<first + last << std::endl;
    return 0;
}
