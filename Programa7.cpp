/*Garay Reyes Lizeth #19210491
P28:C3: Introducir x, la longitud de un lado de un triangulo
equilatero y calcular el perimetro
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
   double l=0, perimetro=0;
   cout<<"Introduce un valor del triangulo"<<endl;
   cin>>l;
   perimetro=(l*3);
   cout<<"El perimetro de untriangulo equilatero es: "<<perimetro<<endl;
}
