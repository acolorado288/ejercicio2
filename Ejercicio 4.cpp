
#include <iostream> 
using namespace std;

int main() { 
    // Declarar la variable
    int anio;
    
    // Pedir el año por teclado 
    cout << "Ingrese un año: ";
    cin >> anio;
    
    // Validar que el año sea positivo 
    if (anio <= 2000) {
        cout << "Error: el anio debe ser mayor que cero." << "\n ";
   } else {
       
    // Determinar si el año es bisiesto
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
       cout << "El año " << anio << " es bisiesto." << "\n ";
   } else {
       cout << "El año " << anio << " no es bisiesto." << "\n ";
      }
    }
    
     return 0;
     
   } 