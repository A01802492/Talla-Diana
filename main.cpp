#include <iostream>
#include "Persona.h"

using namespace std;

int main()
{
    Persona P1;

    P1.setEstaturaPapa();
    P1.setEstaturaMama();
    P1.setSexo();
    cout<<"El bebê con estatura del padre: "<<P1.getEstaturaPapa();
    cout<<" y estatura de la madre: "<<P1.EstaturaMama();
    cout<<" y de sexo NIÑ"<<P1.getSexo()<<endl;
    P1.imprimeEstatura(P1.calculaEstatura());

}