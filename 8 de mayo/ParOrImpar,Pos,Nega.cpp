#include <iostream>
using namespace std;
string positivoORNegativoNum(int x)

{
    string positivoORNegativo;
    if (x > 0)
    {
        positivoORNegativo = " el numero es Positivo";
    }
    else
    {
        positivoORNegativo = " el numero es Negativo";
    }
    return positivoORNegativo;
    
}


string ParOrImpar(int x)
{
    string ParImpar;
    if (x % 2 == 0)
    {
        ParImpar = "el numero es par";
    }
    else
    {
        ParImpar = "el numero es impar";
    }
    return ParImpar;
    
}

int main()
{

    int num;
    cout << "Ingresa un numero entero: ";
    cin >> num;

    cout << "El numero que ingresaste es: " << num << " y"<< positivoORNegativoNum (num) << " y " << ParOrImpar (num);

    return 0;
}