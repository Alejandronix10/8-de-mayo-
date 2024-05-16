#include <iostream>
using namespace std;

int main ()

{
    float alfa, beta, gamma;

    cout << "ingrese primer angulo:";
    cin >> alfa;
    cout << "ingrese segundo angulo:";
    cin >> beta;

    gamma = 180 - (alfa + beta);

    cout << "el tercer angulo es de:" << gamma;


    return 0;
}