
#include <iostream>
#include <cmath>
using namespace std;

  int main() {
   // Declarar los tipos de datos, 
       double a, b, c;
       double discriminante, x1, x2;
       
       cout << "Ingrese el coeficiente a: "; 
       cin >> a;
       
       cout << "Ingrese el coeficiente b: "; 
       cin >> b;
       
       cout << "Ingrese el coeficiente c: "; 
       cin >> c;
       
    if (a == 0 && b == 0) {
          cout << "No es una ecuacion de primer ni de segundo grado." << "\n ";
          
   }
    else if (a == 0) {
           x1 = -c / b;
           
           cout << "Es una ecuacion lineal." << "\n "; 
           cout << "El valor de x es: " << x1 << "\n ";
           
           
     }
    else {
         discriminante = (b * b) - (4 * a * c);
         
         cout << "El discriminante es: " << discriminante << "\n";
         
    if (discriminante > 0) {
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);
           
           cout << "La ecuacion tiene dos raices reales." << "\n "; 
           cout << "x1 = " << x1 << "\n "; 
           cout << "x2 = " << x2 << "\n ";  
         }
   else if (discriminante == 0) {
       x1 = -b / (2 * a);
       cout << "La ecuacion tiene una unica raiz real." << "\n "; 
       cout << "x = " << x1 << "\n ";
       }
       else {
         cout << "La ecuacion tiene raices complejas." << "\n ";
       }
    }
     return 0;
     
     }
     
     