#include <iostream>
#include "Terrestre.h"


Terrestre::Terrestre(double metre, double seconde) {
    this->metre = metre;
    this->seconde = seconde;
}

void Terrestre::walk(double speed) {
    std::cout << "I'm walking at " << speed << " m/s" << std::endl;
}

Terrestre::~Terrestre() {
}

