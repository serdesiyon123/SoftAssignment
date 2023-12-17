#include <iostream>

int main(){
    // check if a number is armstrong or not
    int n, sum = 0, temp, remainder;
    std::cout << "Enter a number: ";
    std::cin >> n; // let n = 153
    temp = n;
while (temp != 0){
        remainder = temp % 10; // 153 % 10 = 3 , second iteration 15 % 10 = 5 , third iteration 1 % 10 = 1
        sum += remainder * remainder * remainder; // 0 + 3*3*3 = 27, second iteration 27 + 5*5*5 = 152 , third iteration 152 + 1*1*1 = 153
        temp /= 10; // temp = 15  , second iteration temp = 1
    }
    if (sum == n) // 153 == 153
        std::cout << n << " is an Armstrong number.";
    else
        std::cout << n << " is not an Armstrong number.";
    return 0;
}
