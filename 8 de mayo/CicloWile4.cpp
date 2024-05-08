#include <iostream>

using namespace std;

int main()
{
   char opcion;
      
   do
   {
      cout << "Menu" << "\n";
      cout << "ACarne asada" << "\n";
      cout << "B Pollo" << "\n";
      cout << "C Cerdo" << "\n";
      cout << "seleccionar una opcion" << "\n";
      cin >> opcion;
      cout << "opcion seleccionada:" << opcion << "\n";

   } while (opcion != 'A' && opcion != 'B' && opcion != 'C');


   return 0;
}

