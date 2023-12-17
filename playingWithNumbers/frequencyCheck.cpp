#include <iostream>
#include <iomanip> // for std::setw

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int frequency[10] = {0}; // initialize frequency array

    while(n > 0){
        int digit = n % 10;
        frequency[digit]++;
        n /= 10;
    }

    // Print table header
    std::cout << std::setw(10) << "Digit" << std::setw(10) << "Frequency" << std::endl;

    // Print table rows
    for(int i = 0; i < 10; i++){
        std::cout << std::setw(10) << i << std::setw(10) << frequency[i] << std::endl;
    }

    return 0;
}