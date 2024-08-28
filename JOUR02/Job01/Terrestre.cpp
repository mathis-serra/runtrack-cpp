#include <iostream>
#include "Terrestre.h"


Terrestre::Terrestre(int metre, int seconde) {
    this->metre = metre;
    this->seconde = seconde;
}

void Terrestre::walk(int speed) {
    std::cout << "I'm walking at " << speed << " m/s" << std::endl;
}

Terrestre::~Terrestre() {
}

