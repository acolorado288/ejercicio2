#include <iostream> 
#include <iomanip>
using namespace std;

 int main() {
     double peso, distancia; 
     double tarifa, total; 
     int zona; 
     char fragil;
     
     // Pedir los datos 
     
     cout << "Ingrese el peso del paquete en kg: "; 
     cin >> peso;
     
     cout << "Ingrese la distancia en km: "; 
     cin >> distancia;
     
     cout << "Ingrese la zona (1 = Nacional, 2 = Internacional): "; 
     cin >> zona;
     
     cout << "El paquete es fragil? (S/N): "; 
     cin >> fragil;
     
     // Convertir la respuesta a mayuscula 
     fragil = (fragil);
     
     // Validar los datos 
     if (peso <= 0 || distancia <= 0 || 
     peso > 30 || (zona != 1 && zona != 2) || 
     (fragil != 'S' && fragil != 'N')) {
         cout << "Error: los datos ingresados no son validos." << "\n "; 
         
     } 
         else {
             // Calcular la tarifa inicial 
             tarifa = 8000 + (peso * 1200) + (distancia * 50);
             // Recargo por zona internacional 
             if (zona == 2) { 
                 tarifa = tarifa * 1.5; 
                
             }
             
            // Recargo por paquete fragil
            if (fragil == 'S') { tarifa = tarifa * 1.20; 
                
            }
            // Mostrar el valor final 
            cout << fixed << setprecision(2); 
            cout << "El valor final a pagar es: $" 
            << tarifa << "\n ";
          } 
         return 0;
         
     
  }
