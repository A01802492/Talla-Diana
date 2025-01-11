#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
    private:
        float estaturaP;
        float estaturaM;
        char sexo;
        float e;
    
    public:
        Persona();
        void setEstaturaPapa();
        void setEstaturaMama();
        void setSexo();

        float getEstaturaPapa();
        float getEstaturaMama();
        char getSexo();

        float calculaEstatura();
        void imprimeEstatura(float e);

        virtual ~Persona();
};

#endif 