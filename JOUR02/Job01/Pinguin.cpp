#include <iostream>
#include "Pinguin.h"


Pingouin::Pingouin(int metre, int seconde) : Aquatique(metre, seconde), Terrestre(metre, seconde) {
    this->metre = metre;
    this->seconde = seconde;
}

void Pingouin::swim(int speed) {
    std::cout << "I'm swimming at " << speed << " m/s" << std::endl;
}

void Pingouin::walk(int speed) {
    std::cout << "I'm walking at " << speed << " m/s" << std::endl;
}

void Pingouin::encounter() {
    std::cout << "HELLO" << std::endl;
}
