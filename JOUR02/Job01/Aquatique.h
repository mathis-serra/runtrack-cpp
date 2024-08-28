#ifndef AQUATIQUE_H
#define AQUATIQUE_H

class Aquatique {
    public:
        Aquatique(int metre, int seconde);
        virtual ~Aquatique();
        virtual void swim(int speed);

    private:
        int metre;
        int seconde;
};

#endif 
