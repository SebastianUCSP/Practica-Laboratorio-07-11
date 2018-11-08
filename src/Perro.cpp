#include "Perro.h"


Perro::Perro(string name, int numero):Animal(name, numero)
{

}

Perro::Perro(Perro &o):Animal(o.nombre, o.nroPatas)
{

}

void Perro::hablaPerro()
{
    cout << "guau" << endl;
}
