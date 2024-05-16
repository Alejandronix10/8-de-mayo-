#include <iostream>
using namespace std;

int main()
{
    // Primero se ingresan los datos 

    float angulo;
    cout << "Ingrese un angulo: ";
    cin >> angulo;

    //Segundo se ponen hacen las operaciones

    if (angulo < 90)
    {
        cout << "El angulo que ingreso es: Agudo";
    }
    else if (angulo == 90)
    {
        cout << "El angulo que ingreso es: Recto";
    }
    else
    {
        cout << "El aungulo es: Obtuso";
    }
    
    return 0;
    
}