
#include <iostream> 
using namespace std;

int main() { 
    // Declarar las variables 
    float peso, estatura, imc;
    
    // Pedir los datos por teclado
    cout << "Ingrese su peso en kilogramos: "; 
    cin >> peso;
    
    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;
    
    // Validar los datos 
    if (peso <= 0 || estatura <= 0) {
     cout << "Error: el peso y la estatura deben ser mayores que cero." << "\n ";
   } else { 
    // Calcular el IMC 
     imc = peso / (estatura * estatura);
     
    // Mostrar el resultado 
       cout << "Su indice de masa corporal es: " << imc << "\n";
       
    // Clasificar el IMC
     if   (imc < 18.5) {
          cout << "Clasificacion: Bajo peso" << "\n ";
   } else if (imc < 25) {     
          cout << "Clasificacion: Normal" << "\n ";
   } else if (imc < 30) {
          cout << "Clasificacion: Sobrepeso" << "\n ";
   } else {
          cout << "Clasificacion: Obesidad" << "\n ";
       }
      
      } 
      
      return 0;
     
   }
      
      
      
    
