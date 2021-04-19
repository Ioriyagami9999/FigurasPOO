#include <iostream>
#include "Cuadrado.h"
#include "Figura.h"




using namespace std;

Figura::Figura(){

Figura::menu();

}

Figura::~Figura(){
    //dtor


}
void Figura::menu(){
    int opcion;
cout<<"Escoge que figura vas a calcular "<<endl;

cout<<"1.-Cuadrado "<<endl;
cout<<"2.-Rectangulo "<<endl;
cout<<"3.-Circulo "<<endl;
cin>>opcion;

switch(opcion){
case 1:

cout <<"Cuadrado"<<endl;
//Quiero crear un objeto para que utilice
//el constructor y de esa forma iniciar la clase cuadrado
//El problema es que al momento de crear un objeto en el switch este daña el switch
//o no lo detecta, probe utilizar dejando un parentesis para que iniciar
//pero no funciono, por cierto soy nuevo no se que mas consejos me puedan dar, apenas voy
//en orientado a objetos y es lo que mas se me dificulta
//Por cierto si no le pongo entre parentesis marca error, si le pongo arranca el programa pero no inicia el constructor
Cuadrado c();
break;


case 2:
    cout <<"Soy aqui ejemplo"<<endl;


    break;


case 3:
    cout<<"unammm"<<endl;
    break;


default:
    cout<<"Error ingresa el dato correcto"<<endl;
 Figura::menu();
break;


}
}

float Figura::areas(float area){


return area;
}

float Figura::perimetros(float perimetro){

return perimetro;
}


