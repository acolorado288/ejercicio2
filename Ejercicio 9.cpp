
#include <iostream>
using namespace std;

  int main() {
      double saldo, monto; 
      int opcion;
      
      cout << "Ingrese el saldo inicial: "; 
      cin >> saldo;
    if (saldo < 0) {
          cout << "Error: el saldo inicial no puede ser negativo." << "\n ";
          return 0;
          
      }
      cout << "\n===== CAJERO AUTOMATICO =====" << "\n ";
      cout << "1. Consultar saldo" << "\n ";
      cout << "2. Retirar dinero" << "\n ";
      cout << "3. Consignar dinero" << "\n ";
      cout << "Seleccione una opcion: ";
      cin >> opcion;
      
    if (opcion == 1) {
        cout << "Su saldo actual es: $" << saldo << "\n ";
    }
    
    else if (opcion == 2) {
        cout << "Ingrese el monto que desea retirar: $";
        cin >> monto;
    if (monto <= 0) {
         cout << "Error: el monto debe ser positivo." << "\n ";
    }
    else if (monto > saldo) {
        cout << "Error: no tiene suficiente saldo." << "\n ";
    }
    else {
        saldo = saldo - monto;
        
        cout << "Retiro realizado correctamente." << "\n ";
        cout << "Su nuevo saldo es: $" << saldo << "\n ";
        
    }
  }
   else if (opcion == 3) {
       cout << "Ingrese el monto que desea consignar: $";
       cin >> monto;
       
       if (monto <= 0) {
           cout << "Monto no valido" << "\n ";
    } else {
          saldo = saldo + monto;
          
          cout << "Consignacion realizada correctamente." << "\n ";
          cout << "Su nuevo saldo es: $" << saldo << "\n ";
        }
     }
     else {
         cout << "Error: opcion no valida." << "\n ";
    
      }
       
     return 0;
     
  } 