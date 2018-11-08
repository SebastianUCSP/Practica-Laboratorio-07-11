#include "Gato.h"
#include <string>

Gato::Gato(string name, int numero):Animal(name, numero)
{

}

Gato::Gato(Perro &o):Animal(o.nombre, o.nroPatas)
{

}

void Gato::hablaGato()
{
    cout << "guau" << endl;
}
