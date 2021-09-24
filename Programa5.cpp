/*Garay Reyes Lizeth #19210491
P19:C3: Introducir las longitudes de los lados de 
un triangulo. Encontrar el perimetro.
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
   double L1=0,L2=0,L3=0,Per=0;
   cout<<"Introduce el valor de un lado del triangulo"<<endl;
   cin>>L1;
   cout<<"Introduce el valor de un lado del triangulo"<<endl;
   cin>>L2;
   cout<<"Introduce el valor de un lado del triangulo"<<endl;
   cin>>L3;
   Per=(L1+L2+L3);
   cout<<"El perimetro del triangulo es: "<<Per<<endl;
}
