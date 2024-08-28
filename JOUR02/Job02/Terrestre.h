#ifndef TERRESTRE_H
#define TERRESTRE_H

class Terrestre {
    public:
        Terrestre(int metre, int seconde);
        virtual ~Terrestre();
        virtual void walk(int speed);

    private:
        int metre;
        int seconde;
};

#endif // TERRESTRE_H
