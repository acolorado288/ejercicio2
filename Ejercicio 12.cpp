#include <iostream> 
#include <iomanip>
using namespace std;

 int main() {
     double ingreso, deuda; 
     double relacion, capacidad; 
     int edad, historial; 
     
   // Pedir los datos 
   
     cout << "Ingresar los ingresos mensuales: $"; 
     cin >> ingreso; 
     
     cout << "Ingresar las deudas mensuales: $"; 
     cin >> deuda; 
     
     cout << "ingresar la edad: ";
     cin >> edad; 
     
     cout << "Tiene historial crediticio? (1 = Si, 0 = No): ";
     cin >> historial;
     
   // Validar los datos 
     if (ingreso <= 0 || deuda < 0 || 
     edad < 18 || edad > 100 ||
     (historial != 0 && historial != 1)) {
         cout << "Error: los datos ingresados no son validos." << "\n "; 
         
    } else {
        
   // Calcular la relacion deuda / ingreso 
        relacion = deuda / ingreso;
  // Clasificar el riesgo 
        if (relacion > 0.5 || capacidad < 0) { 
            cout << "Nivel de riesgo: ALTO" << "\n "; 
            
    }
       else if (relacion <= 0.3 && edad >= 25 && historial == 1) { 
           cout << "Nivel de riesgo: BAJO" << "\n ";
    } else { 
        cout << "Nivel de riesgo: MEDIO" << "\n ";
        }
        // Mostrar todos los resultados
        cout << fixed << setprecision(2);
        
        cout << "Relacion deuda/ingreso: " 
             << relacion << "\n "; 
             
        cout << "Capacidad de pago: $" 
             << capacidad << "\n "; 
        
         }
     return 0;
    
   }