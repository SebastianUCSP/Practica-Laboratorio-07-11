#include "Loro.h"
#include <string>

Loro::Loro(string name, int numero):Animal(name, numero)
{

}

Loro::Loro(Perro &o):Animal(o.nombre, o.nroPatas)
{

}

void Loro::hablaLoro()
{
    cout << "guau" << endl;
}
