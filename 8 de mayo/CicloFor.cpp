#include <iostream>
using namespace std;

int main()
{

  int entero;
  cout << "Ingrese un numero entero n: "; 
  cin >> entero;

  for (int i = 2; i <= entero; i = i + 2)
  {
    cout << i << "\n";

  }
}
