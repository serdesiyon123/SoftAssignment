#include <iostream>

int main(){
    int num, temp, rem, fact, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;
    temp = num;
    while (num != 0){
        rem = num % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++){
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == temp){
        std::cout << temp << " is a strong number.";
    }
    else{
        std::cout << temp << " is not a strong number.";
    }

    // example of strong num


    return 0;

}