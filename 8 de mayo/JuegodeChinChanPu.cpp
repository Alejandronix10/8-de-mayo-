#include <iostream>

//Se agregan diferntes librerias

#include <stdlib.h>  
#include <time.h>
using namespace std;

int main()
{
    int a, t;
    t = time(NULL);
    srand(t);
    a = rand() % 3 + 1;
    cout << a;

//Luego ponemos los datos de eleccion

    int eleccion;

    cout << "\t Bienvenidos esto es un juego de chin chan pu \n";
    cout << "1 ==> Piedra \n";
    cout << "2 ==> Papel \n";
    cout << "3 ==> Tijeras \n";
    cin >> eleccion;

// Ponemos los datos y ejecutamos el programa

    if (eleccion >= 1 && eleccion <= 3)
    {

        if (eleccion == 1 && a == 3)
    {
        cout << "Has ganado con Papel a Tijeras";
    }

    else if(eleccion == 2 && a == 1)
    {
        cout << "La maquina ha ganado con Piedra a Papel";
    }

    else if(eleccion == 3 && a == 2)
    {
        cout << "Has ganado con Tijeras a Papel";
    }
    
    else if(eleccion == 2 && a == 3)
    {
        cout << "La maquina ha ganado con Tijeras a Papel";
    }

    else
    {
        cout << "El resultado es un empate";
    }

    }

    else
    {
        cout << "El valor proporcionado es invalido";
    }
    
    return 0;
}