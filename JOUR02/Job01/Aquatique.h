#ifndef AQUATIQUE_H
#define AQUATIQUE_H

class Aquatique {
    public:
        Aquatique(double metre, double seconde);
        virtual ~Aquatique();
        virtual void swim(double speed);

    private:
        double metre;
        double seconde;
};

#endif 
