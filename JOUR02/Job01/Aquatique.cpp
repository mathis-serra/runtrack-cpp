#include <iostream>
#include "Aquatique.h"

Aquatique::Aquatique(int metre, int seconde) {
    this->metre = metre;
    this->seconde = seconde;
}

void Aquatique::swim(int speed) {
    std::cout << "I'm swimming at " << speed << " m/s" << std::endl;
}

Aquatique::~Aquatique() {
}

