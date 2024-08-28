#include "Aquatique.h"
#include "Terrestre.h"

#ifndef PINGOUIN_H
#define PINGOUIN_H


class Pingouin : public Aquatique, public Terrestre {
    
    public:
        Pingouin(int metre, int seconde);
        virtual ~Pingouin();
        void swim(int speed);
        void walk(int speed);
        void encounter();
    
    private:
        int metre;
        int seconde;
};
#endif