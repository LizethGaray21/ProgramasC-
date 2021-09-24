/*Garay Reyes Lizeth #19210491
P9:C3:Encontrar el tercer lado de un triangulo rectangulo
mediante el teorema de pitagonas */
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
int menu=0;
double cateto1=0,cateto2=0,hipotenusa=0,ct1=0,ct2=0,hipo=0;
void hipotenusa_cateto()
{

cout<<"Introduce La Hipotenusa"<<endl;
cin>>hipotenusa;
cout<<"Introduce El Cateto"<<endl;
cin>>cateto1;
ct1=cateto1*cateto1;
hipo=hipotenusa*hipotenusa;
ct2=hipo-ct1;
cateto2=sqrt(ct2);
cout<<"El Cateto Calculado Es: "<<cateto2<<endl;
}
void catetos()
{
    
cout<<"Introduce El Cateto 1"<<endl;
cin>>cateto1;
cout<<"Introduce El Cateto 2"<<endl;
cin>>cateto2;
ct1=cateto1*cateto1;
ct2=cateto2*cateto2;
hipo=ct1+ct2;
hipotenusa=sqrt(hipo);
cout<<"El valor de la hipotenusa es: "<<hipotenusa<<endl;
}
void Menu()
{

cout<<"*Teclea El Numero De Una Opcion y Pulsa Enter*"<<endl;
cout<<"1-Se conoce la hipotenusa y un cateto."<<endl;
cout<<"2-Se conocen ambos catetos."<<endl;
cin>>menu;
if((menu<1)||(menu>2))
{
    cout<<"Elija Una Opcion Valida Pulsa Enter Para Continuar"<<endl;
   
    Menu();
}
else
{
    if(menu==1)
    {
        hipotenusa_cateto();
    }
    else
    {
        catetos();
    }
}
}
int main()
{
Menu();
}
