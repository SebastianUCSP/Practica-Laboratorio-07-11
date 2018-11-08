#ifndef PERRO_H
#define PERRO_H

#include <Animal.h>


class Perro:public Animal
{
    public:
        Perro(string n, int p){
        Perro(Perro &o);
        void hablaPerro();
};

#endif // PERRO_H
