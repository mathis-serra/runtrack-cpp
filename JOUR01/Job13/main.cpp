#include <iostream>

// Fonction constexpr pour calculer le N-ième terme de la suite de Fibonacci à la compilation
constexpr int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Afficher les 10 premiers termes de la suite de Fibonacci
    std::cout << "Les 10 premiers termes de la suite de Fibonacci :\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "F(" << i << ") = " << fibonacci(i) << std::endl;
    }
    return 0;
}
