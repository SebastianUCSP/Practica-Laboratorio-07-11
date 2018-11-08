#include "AnimalArray.h"


AnimalArray::AnimalArray()
{
    this->animals = new Animal[size];
    this->size = 0;
}

AnimalArray::AnimalArray(const Animal arr[], const int size)
{
    this->animals = new Animal[size];
    this->size = size;
    for(int i = 0; i < size; i++){
        animals[i] = arr[i];
    }
}

AnimalArray::AnimalArray(AnimalArray &o)
{
    this->animals = new Animal[size];
    this->size = o.size;
    for(int i = 0; i < size; i++){
        animals[i] = o.animals[i];
    }
}

AnimalArray::~AnimalArray()
{
    delete[] animals;
}

void AnimalArray::imprimir()
{
    for(int i = 0; i < size; i++){
        animals[i].imprimir();
    }
}

int AnimalArray::getSize()
{
    return size;
}

void AnimalArray::clear()
{
    resize(0);
}

void AnimalArray::remove(const int pos)
{
    for(int i = pos; i < size; i++){
        animals[i] = animals[i+1];
    }
    resize(size - 1);
}

void AnimalArray::insert(const int pos, const Animal &p) {
	resize(size+1);
    for(int i = size-1; i >d pos; i--)
        animals[i] = animals[i-1];
	animals[pos] = p;
}

void AnimalArray::push_back(const Animal &p)
{
    resize(size + 1);
    this->animals[size - 1] = p;
}
void AnimalArray::resize(int newSize)
{
    Animal *arr = new Animal[newSize];
    int minSize = (newSize > size)? size : newSize;
    for(int i = 0; i < minSize; i++)
        arr[i] = animals[i];

    delete[] animals;
    size = newSize;
    animals = arr;
}
