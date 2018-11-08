#ifndef GATO_H
#define GATO_H

#include <Animal.h>


class Gato:public Animal
{
    public:
        Gato(string n, int p){
        Gato(Gato &o);
        void hablaGato();
};

#endif // GATO_H
