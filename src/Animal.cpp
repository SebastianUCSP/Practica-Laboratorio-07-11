#include "Animal.h"
#include <string>
#include <iostream>

Animal::Animal()
{

}

Animal::Animal(string x, int num)
{
    nombre = x;
    nroPatas = num;
}

void Animal::print()
{
    cout << "nombre" << nombre << "," << "nroPatas" << nroPatas << endl;
}

void Animal::habla(void)
{

}

void Animal::hacerHablar()
{
    cout << this->habla() << endl;
}
