#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H
#include "Animal.h"

class AnimalArray
{
    public:
        AnimalArray();
        AnimalArray(const Animal arr[], const int size);
        AnimalArray(AnimalArray &o);
        ~AnimalArray();

        void imprimir();
        int getSize();

    void clear();
    void remove(const int);
    void insert(const int, const Animal &p);
    void push_back(const Animal &p);

    private:
        int size;
        Animal *animals;
    void resize(int);
};

#endif // ANIMALARRAY_H
