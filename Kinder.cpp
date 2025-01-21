#include "Kinder.h"
#include <iostream>

Kinder::Kinder()
{

}

void Kinder::setDatosVector(){
   char opc;
    Persona P;

    do{
            //P=new persona();
            P.setEstaturaMama();
            P.setEstaturaPapa();
            P.setSexo();
            k.push_back(P);
            cout<<"Capturar datos de otro niño o niña? s/n";
            cin>>opc;
    }while(opc!='n');
}



void Kinder::imprimeVector() {
    for (size_t i = 0; i < k.size(); i++) {
        k[i].imprimeEstatura(k[i].calculaEstatura());
    }
}

Kinder::~Kinder()
{
    //dtor
}