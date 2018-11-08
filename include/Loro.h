#ifndef LORO_H
#define LORO_H

#include <Animal.h>


class Loro:public Animal
{
    public:
        Loro(string n, int p){
        Loro(Loro &o);
        void hablaLoro();
};

#endif // LORO_H
