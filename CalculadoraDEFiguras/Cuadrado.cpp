#include <iostream>
#include "Cuadrado.h"


using namespace std;

Cuadrado::Cuadrado()
{
    //ctor

    Cuadrado::MostrarPantalla();

}

Cuadrado::~Cuadrado()
{
    //dtor
}

void Cuadrado::capturaDatos(){
    int opcionC;
cout<<"Captura el lado "<<endl;
cin>>lado;
cout<<"1-. Area "<<endl;
cout<<"2-. Perimetro  "<<endl;
cin>>opcionC;

switch(opcionC){
case 1:
cout<<"Area... "<<endl;
cout<<"El area es : "<<Cuadrado::CalculoArea()<<endl;
    break;

case 2:
cout<<"Perimetro... "<<endl;
cout<<"El Perimetro es : "<<Cuadrado::CalculoPerimetro()<<endl;
    break;
default:
    cout <<"Error ingresa el valor correcto  "<<endl;
    Cuadrado::capturaDatos();

    break;


}

}

void Cuadrado::MostrarPantalla(){
Cuadrado::capturaDatos();
}
float Cuadrado::CalculoArea(){
float resul;
resul=(lado*lado);

return Cuadrado::areas(resul);
}

float Cuadrado::CalculoPerimetro(){
float re;
re=4*lado;


return Cuadrado::perimetros(re);
}
