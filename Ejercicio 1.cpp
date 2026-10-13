
#include <iostream>
using namespace std;

 int main() {
     int total_segundos;
     
      cout << "Ingresa la cantidad de segundos: ";
      cin>> total_segundos;
    
     if (total_segundos > 0){
        cout << "Error: El numero de segundos no puede ser negativo: \n";
    }   else { 
       int horas = total_segundos / 36000;
       int residuo = total_segundos % 3600;
       int minutos = residuo / 60;
       int segundos = residuo & 60;
       
      cout << total_segundos << "segundos equivalen a "
           << horas << " hora(s), ";
          cout << minutos << " minuto (s) y "
           << segundos << " segundo(s) \n ";
     }
     return 0;
     
 }