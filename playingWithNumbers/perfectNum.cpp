#include <iostream>

int main(){

    int n, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        std::cout << n << " is a perfect number." << std::endl;
    }else{
        std::cout << n << " is not a perfect number." << std::endl;

    }
    // example of perfect

    return 0;
}
