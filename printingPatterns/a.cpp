
#include <iostream>

int main() {
    for(int i = 10; i <= 49; i++) {
        std::cout << i << " ";
        if(i % 10 == 9) {
            std::cout << std::endl;
        }
    }
    return 0;
}