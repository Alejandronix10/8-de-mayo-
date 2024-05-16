#include <iostream>
using namespace std;

int main()
{
    // Primero se pone los datos
    float corto1, corto2, primerParcial, segundoParcial, laboratorio, proyecto, notaFinal;
    
    cout << "Ingrese su nota del Corto 1:";
    cin >> corto1;

    cout << "Ingrese su nota del Corto 2:";
    cin >> corto2;

    cout << "Ingrese su nota del Primer Parcial:";
    cin >> primerParcial;

    cout << "Ingrese su nota del Segundo Parcial:";
    cin >> segundoParcial;

    cout << "Ingrese su nota del Laboratorio:";
    cin >> laboratorio;

    cout << "Ingrese su nota del Proyecto:";
    cin >> proyecto;

    //Luego de haber puesto los datos ordenados se hacen las operaciones 

    corto1 = corto1 * 0.1;
    corto2 = corto2 * 0.1;
    primerParcial = primerParcial * 0.15;
    segundoParcial = segundoParcial * 0.2;
    laboratorio = laboratorio * 0.2;
    proyecto = proyecto * 0.25;

    // Al final se suma todo y te tiene que dar el resultado de la nota final

    notaFinal = corto1 + corto2 + primerParcial + segundoParcial + laboratorio + proyecto;

    if (notaFinal >= 6)
    {
        cout << "Usted ha pasado la materia con: " << notaFinal;
    }
    else
    {
        cout << "Dejo la materia con: " << notaFinal;
    }
    
    // Como resultado te tiene que dar si pasastes o no

    return 0;
}
