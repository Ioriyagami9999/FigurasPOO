#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.h"


class Cuadrado:public Figura{
   private:
       float lado;

    public:
        Cuadrado();

~Cuadrado();

    private:
        void capturaDatos();
        void MostrarPantalla();
        float CalculoArea();
        float CalculoPerimetro();


};

#endif // CUADRADO_H
