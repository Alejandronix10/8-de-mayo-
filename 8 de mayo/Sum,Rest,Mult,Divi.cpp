#include <iostream>
using namespace std;

int suma(int x, int y)
{
    return x+y;
}

float resta(int x, int y)
{
    return x-y;
}

int multiplicacion(int x, int y)
{
    return x*y;
}

float division(int x, int y)
{
    return x/y;
}

int main ()

{
    int a,b,opc;
    cout << "ingrese numero entero a=";
    cin >> a;
    cout << "ingrese numero entero b=";
    cin >> b;

    cout << "elija que opcion desea; \n\t1.suma \n\t2.resta \n\t3.multiplicacion \n\t4.division \n\t0tro numero: salir\n";
    cout << "su opcion es: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
    cout << " el resultado de "<< a << " + " << b << " es " <<suma(a,b); 
    break;

    case 2:
    cout << " el resultado de "<< a << " - " << b << " es " <<resta(a,b);
    break;

    case 3:
    cout << " el resultado de "<< a << " * " << b << " es " <<multiplicacion(a,b);
    break;

    case 4:
    cout << " el resultado de "<< a << "/" << b << " es " <<division(a,b);
    break;
    
    default:
    cout << " no hice nada ";
    break;
    }
    
 
  return 0; 
}