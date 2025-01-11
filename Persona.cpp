#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona()
{
    estaturaP=0;
    estaturaM=0;
    e=0;
}

void Persona::setEstaturaPapa()
{
    cout<<"Ingresa la estatura del papá en cm: ";
    cin>>estaturaP;
}

void Persona::setEstaturaMama()
{
    cout<<"Ingresa la estatura de la mamá en cm: ";
    cin>>estaturaM;
}

void Persona::setSexo()
{
    cout<<"Ingresa el sexo (O para niño y A para niña): ";
    cin>>sexo;
}

float Persona::getEstaturaPapa()
{
    return estaturaP;
}

float Persona::getEstaturaMama()
{
    return estaturaM;
}

char Persona::getSexo()
{
    return sexo;
}

float Persona::calculaEstatura()
{
    switch (sexo) {
        case 'O':
            e = (estaturaP + estaturaM + 13) / 2;
            break;
        case 'A':
            e = (estaturaP + estaturaM - 13) / 2;
            break;
        default:
        
            break;
    }
    return e;
}

void Persona::imprimeEstatura(float e)
{
    cout<<"Tendrá una estatura futura de: "<<e<<endl;
}

Persona::~Persona()
{

}