#include <iostream>
#include "Aquatique.h"

Aquatique::Aquatique(double metre, double seconde) {
    this->metre = metre;
    this->seconde = seconde;
}

void Aquatique::swim(double speed) {
    std::cout << "I'm swimming at " << speed << " m/s" << std::endl;
}

Aquatique::~Aquatique() {
}

