#ifndef TERRESTRE_H
#define TERRESTRE_H

class Terrestre {
    public:
        Terrestre(double metre, double seconde);
        virtual ~Terrestre();
        virtual void walk(double speed);

    private:
        double metre;
        double seconde;
};

#endif // TERRESTRE_H
