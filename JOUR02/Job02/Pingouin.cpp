#include <iostream>
#include "Pingouin.h"


Pingouin::Pingouin(int metre, int seconde) : Aquatique(metre, seconde) {}

Pingouin::~Pingouin() {}

void Pingouin::swim(int speed) {
    std::cout << "Pingouin swimming at " << speed << " m/s" << std::endl;
}

void Pingouin::walk(int speed) {
    std::cout << "Pingouin walking at " << speed << " m/s" << std::endl;
}

void Pingouin::encounter() {
    std::cout << "Pingouin encounters something!" << std::endl;
}
