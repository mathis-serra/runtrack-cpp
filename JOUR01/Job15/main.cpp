#include <iostream> 

int main() {
    char bit;
    std::cin >> bit;
    if (bit != 0 && bit != 1) {
        std::cout << "Invalid input" << std::endl;
    } else {
        std::cout << "Valid input" << std::endl;
    }

    return 0;
    
}