
#include <iostream> 
using namespace std;

int main() { 
    // Declarar las variables 
    float nota1, nota2, nota3; 
    float promedio;
    
    // Pedir las tres notas
    cout << "Ingrese la primera nota (0.0 a 5.0): ";
    cin >> nota1;
    
    cout << "Ingrese la segunda nota (0.0 a 5.0): "; 
    cin >> nota2;
    
    cout << "Ingrese la tercera nota (0.0 a 5.0): "; 
    cin >> nota3;
    
        // Validar las notas 
    if  (nota1 < 0 || nota1 > 5 || 
         nota2 < 0 || nota2 > 5 || 
         nota3 < 0 || nota3 > 5) {
             
        cout << "Error: las notas deben estar entre 0.0 y 5.0." << "\n ";
        
       } else { 
       // Calcular el promedio ponderado 
         promedio = (nota1 * 0.30) + (nota2 * 0.30) + (nota3 * 0.40);     
         
        // Mostrar el promedio
        cout << "El promedio ponderado es: " << promedio << "\n ";
        // Determinar el concepto
         if (promedio >= 4.5) {
            cout << "Concepto: Excelente" << "\n ";
       } else if (promedio >= 4.0) {
           cout << "Concepto: Bueno" << endl;
       } else if (promedio >= 3.0) {  
           cout << "Concepto: Aceptable" << "\n ";
       } else {
           cout << "Concepto: Reprobado" << "\n ";
        }
       
      }
    
       return 0;
       
    } 
