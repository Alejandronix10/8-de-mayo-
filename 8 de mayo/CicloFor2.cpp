#include <iostream>
using namespace std;

int main ()

{
    int numeroprimo;
    cout <<"ingrese un numero primo: ";
    cin >> numeroprimo;
    int primo = 1;

    for ( int i = numeroprimo -1; i >= 2; i = i -1)
   { 
      int modulo = numeroprimo % i;
      if (modulo == 0)

      {
        cout << numeroprimo << " No es primo";
        primo = 0;
        break;
      }
       
       if (primo)
       {
        cout << numeroprimo << " Es primo";
        primo;
        break;
       }
    }  

    return 0; 

}

    
