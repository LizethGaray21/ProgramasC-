/*Garay Reyes Lizeth #19210491
P20:C3: Introducir las longitudes de los tres lados de 
un triangulo y determinar el area
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
   double b=0,a=0,L3=0,Area=0;
   cout<<"Introduce el primer valor del triangulo"<<endl;
   cin>>b;
   cout<<"Introduce el segundo valor del triangulo"<<endl;
   cin>>a;
   Area=(b * a)/2;
   cout<<"El area del triangulo es: "<<Area<<endl;
}
