#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
    protected:
        string nombre;
        int nroPatas;

    public:
        Animal();
        Animal (string n, int p);

        void print();
        //virtual void habla() = 0;
        void habla(void);
        void hacerHablar();

};

#endif // ANIMAL_H
