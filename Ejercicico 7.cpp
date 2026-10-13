
#include <iostream>
using namespace std;

  int main() {
      // Declarar las variables float valorHora, 
      float valorHora, horasTrabajadas;
      float horasNormales, horasExtra, horasDobles;
      float salarioBruto, descuento, salarioNeto;
      float porcentajeDescuento;
      
      // Pedir los datos 
      cout << "Ingrese el valor de la hora trabajada: $"; 
      cin >> valorHora;
      
      cout << "Ingrese la cantidad de horas trabajadas: "; 
      cin >> horasTrabajadas;
      
      // Validar los datos
      if (valorHora <= 0 || horasTrabajadas < 0) {
          cout << "Error: el valor de la hora debe ser positivo"; 
          cout << " y las horas no pueden ser negativas." << "\n ";
    }
      else {
      // Calcular las horas normales, extra y dobles
      if (horasTrabajadas <= 40) {
          horasNormales = horasTrabajadas;
          horasExtra = 0;
          horasDobles = 0;
      }
      else if (horasTrabajadas <= 48) {
          horasNormales = 40;
          horasExtra = horasTrabajadas - 40;
          horasDobles = 0;
      }
      else {
          horasNormales = 40;
          horasExtra = 8;
          horasDobles = horasTrabajadas - 48;
      }
      // Calcular el salario bruto
      salarioBruto = (horasNormales * valorHora)
                   + (horasExtra * valorHora * 1.5) 
                   + (horasDobles * valorHora * 2);
    
      // Determinar el porcentaje de descuento
      porcentajeDescuento = (salarioBruto > 2000000) ? 0.08 : 0.04;
      
      // Calcular el descuento y el salario neto
      descuento = salarioBruto * porcentajeDescuento;
      salarioNeto = salarioBruto - descuento;
      
      // Mostrar los resultados
      cout << "\n----- RESULTADO DE LA NOMINA -----" << "\n " ;
      
      cout << "Horas normales: " << horasNormales << "\n ";
      cout << "Horas extra (1.5): " << horasExtra << "\n ";
      cout << "Horas dobles (x2): " << horasDobles << "\n ";
      
      cout << "Salario bruto: $" << salarioBruto << "\n ";
      cout << "Valor del descuento: $" << descuento << "\n "; 
      cout << "Salario neto: $" << salarioNeto << "\n ";
      
      cout << "Porcentaje de descuento: " 
           << porcentajeDescuento * 100 << "%" << endl;
      }
     return 0;
     
    }
    
   






