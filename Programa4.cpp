//Garay Reyes Lizeth #19210491
//C3:P18.Introducir los catetos de un triangulo
//rectangulo, obtener perimetro.

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
   double cateto1=0,cateto2=0,hipotenusa=0,peri=0;
   cout<<"Introduce el cateto a"<<endl;
   cin>>cateto1;
   cout<<"Introduce el cateto b"<<endl;
   cin>>cateto2;
   hipotenusa=(cateto1* cateto1)+(cateto2*cateto2);
   cout<<"El valor de la hipotenusa es: "<<hipotenusa<<endl;
   cout<<"El perimetro es: "<<(cateto1+cateto2+hipotenusa)<<endl;
}
