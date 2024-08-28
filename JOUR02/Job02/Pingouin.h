#ifndef PINGOUIN_H
#define PINGOUIN_H

#include "Aquatique.h"

class Pingouin : public Aquatique {
public:
    Pingouin(int metre, int seconde);
    ~Pingouin();
    void swim(int speed);
    void walk(int speed);
    void encounter();
};

#endif // PINGOUIN_H
