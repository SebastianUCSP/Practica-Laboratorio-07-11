#include <iostream>
#include <string>
#include "Perro.h"
#include "Gato.h"
#include "Loro.h"
#include "Animal.h"

using namespace std;


int main()
{
Perro p("rex", 1);
Gato g("michi", 2);
Loro l("juan", 3);
Animal *animal1 = &p;
Animal *animal2 = &g;
Animal *animal3 = &l;
animal1->habla();
animal2->habla();
animal3->habla();


