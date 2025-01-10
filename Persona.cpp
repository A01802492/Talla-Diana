#include "Persona.h"
#include <iostream>

Persona::Persona()
{
    float estaturaP;
    float estaturaM;
    char sexo;
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

float Persona::getSexo()
{
    return sexo;
}

float Persona::calculaEstatura();
{
    switch (sexo){
        case 'O': break;
        case 'A': break;
    
    if (case O){
        e = (estaturaP + estaturaM + 13)/2
    }
    if (case A){
        e = (estaturaP + estaturaM - 13)/2
    }

    }
}

void imprimeEstatura(float e);
{
    cout<<"La estatura futura del bebé será de: "<<e;
}