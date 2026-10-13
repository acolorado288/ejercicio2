#include <iostream> 
using namespace std;
int main() { 
    int dia, mes, anio; 
    int dias_mes; 
    bool bisiesto;
    // Pedir los datos cout << "Ingrese el dia: "; 
    cin >> dia; 
    cout << "Ingrese el mes (1-12): "; 
    cin >> mes; 
    cout << "Ingrese el anio: "; 
    cin >> anio;
    
    // Verificar si el anio y el mes son validos 
    if (anio > 0 && mes >= 1 && mes <= 12) {
        // Comprobar si el anio es bisiesto 
        if ((anio % 4 == 0 && anio % 100 != 0) || 
        (anio % 400 == 0)) { 
            bisiesto = true;
            
    } else { 
        bisiesto = false;
     }
     // Calcular los dias del mes 
     if (mes == 2) { 
         if (bisiesto) { 
             dias_mes = 29; 
             
         } else { 
             dias_mes = 28; 
             
         } 
         
      }
       else if (mes == 4 || mes == 6 ||
        mes == 9 || mes == 11) { 
            dias_mes = 30; 
            
        } 
        else {
            dias_mes = 31;
       }
           // Comprobar si el dia es valido 
           if (dia >= 1 && dia <= dias_mes) { 
               cout << "La fecha es valida." << "\n "; 
               cout << "El mes tiene " << dias_mes 
                    << " dias." << endl; 
               
           } else { 
               cout << "La fecha no es valida." << "\n "; 
               
           }  
         } else { 
             cout << "La fecha no es valida." << "\n ";
          } 
          
         return 0; 
    
    }