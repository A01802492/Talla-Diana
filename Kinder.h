#ifndef KINDER_H
#define KINDER_H
#include <vector>
#include <iostream>
#include "Persona.h"

using namespace std;

class Kinder
{
    private:
        vector <Persona> k;
    public:
        Kinder();
        void setDatosVector();
        void imprimeVector();
        virtual ~Kinder();

};

#endif