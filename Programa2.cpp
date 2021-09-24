#include <iostream>
using namespace std;

int main() 
{
    /*P17: Introducir las longitudes de los lados de un 
    triangulo. Determinar si el triangulo es 
    isosceles, equilatero o escaleno.
    Alumna: Garay Reyes Lizeth #19210491
    */
    float l1,l2,l3;
    cout<<"Ingresa los lados del triangulo: ";
    cin>>l1>>l2>>l13;
    if(l1==l2)
    {
        if(l2==l3)
        {
            cout<<endl<endl<<"El triangulo es equilatero";
        }
        else
        {

        cout<<endl<endl<<"El triangulo es isosceles";
        }
    }
    else
    if(l1==l3)
    {
        cout<<endl<<endl<<"Es un triangulo isosceles";
    }
    else
    if(l2==l3)
    {
         cout<<endl<<endl<<"Es un triangulo isosceles";
    }
    else
    {
         cout<<endl<<endl<<"Es un triangulo escaleno";
    }
    return 0;
}
