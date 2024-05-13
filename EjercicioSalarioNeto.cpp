#include <iostream>
using namespace std;

int main ()

{
    string nombre;
    float horas;
    float horasExtras, horasBase, salarioNeto, impuesto, salarioLiquido;

    //Datos de entrada
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;    

    //Calculo de salario neto sin impuestos
    if(horas <= 0 && horas > 0)
    {
        horasBase = horas;
        horasExtras = 0;
    }
    
    else
    {
        horasBase = 160;
        horasExtras = horas - 160;
    }

    salarioNeto = horasBase * 10 + horasExtras * 10 * 1.5;

    if (salarioNeto <= 2000)
    {
        impuesto = 0;
    }
    else if (salarioNeto > 2000 && salarioNeto <= 2200)
    {
        impuesto = salarioNeto * 0.2;
    }
    else 
    {
        impuesto = salarioNeto * 0.3;
    }

    // Salidas
    cout << nombre << "sus datos de salario son: " << "\n";
    cout << "su salario neto es de: " << salarioNeto << "\n";
    cout << "sus impuestos son: " << impuesto << "\n";
    cout << "su salario liquido es de: " << salarioNeto - impuesto << "\n";

    // \t significa tabulador 



    return 0;
}




