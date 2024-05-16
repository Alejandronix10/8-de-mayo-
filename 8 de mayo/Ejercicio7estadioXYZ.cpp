#include <iostream>
using namespace std;

int main()

{

    int Cantidad_De_Entradas;
    int Sol_General = 3;
    int Sol_Preferente = 5;
    int Sombra = 8;
    int Tribuna = 15;
    int Platea = 20;
    char Sector;

    cout << "Elige el sector del estadio en el que quieres estar: " << "\n"
    << "1: Sol general con un costo de $3" << "\n"
    << "2: Sol Preferente con un costo de $5" << "\n"
    << "3: Sombra con un costo de $8" << "\n"
    << "4: Tribuna con un costo de $15" << "\n"
    << "5: Platea con un costo de $20" << "\n";
    cin >> Sector;

    cout << "Porfavor ingrese la cantidad de entradas que deseas comprar: ";
    cin >> Cantidad_De_Entradas;
    
    
    switch (Sector)

     {
    case '1':
        cout << "Usted ha elegido el sector de Sol General y su cantidad de entradas son: " << Cantidad_De_Entradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << Cantidad_De_Entradas * Sol_General;
        break;

    case '2':
        cout << "Usted ha elegido el sector de Sol Preferente y su cantidad de entradas son: " << Cantidad_De_Entradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << Cantidad_De_Entradas * Sol_Preferente;
        break;

    case '3':
        cout << "Usted ha elegido el sector de Sombra y su cantidad de entradas son: " << Cantidad_De_Entradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << Cantidad_De_Entradas * Sombra;
        break;

    case '4':
        cout << "Usted ha elegido el sector de Tribuna y su cantidad de entradas son: " << Cantidad_De_Entradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << Cantidad_De_Entradas * Tribuna;
        break;

    case '5':
        cout << "Usted ha elegido el sector de Platea y su cantidad de entradas son: " << Cantidad_De_Entradas
        << "\n" << "El total a pagar por sus entradas es el monto de: $" << Cantidad_De_Entradas * Platea;
        break;
    
    default:
    cout << "El valor ingresado no es correcto";
        break;
    }

 return 0;
}
