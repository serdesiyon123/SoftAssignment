#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    // Convert the number to a string
    std::string str = std::to_string(n);

    // Create a character array and copy the characters from the string
    char arr[str.length() + 1];
    std::copy(str.begin(), str.end(), arr);
    arr[str.length()] = '\0'; // null terminate the array

    // Swap the first and last elements of the array
    std::swap(arr[0], arr[str.length() - 1]);

    // Convert the array back to a string
    str = std::string(arr);

    // Convert the string back to an integer
    int swapped = std::stoi(str);

    std::cout << "Swapped: " << swapped << std::endl;

    return 0;
}