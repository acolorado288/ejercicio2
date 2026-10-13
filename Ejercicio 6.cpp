
#include <iostream>
using namespace std;

int main() {
  // Declarar las variables
	int numero1, numero2, numero3; 
	int mayor, menor;
	
  // Pedir los tres numeros por teclado 
	cout << "Ingrese el primer numero entero: "; 
	cin >> numero1;
	
	cout << "Ingrese el segundo numero entero: "; 
	cin >> numero2;
	
	cout << "Ingrese el tercer numero entero: "; 
	cin >> numero3;
	
  // Encontrar el numero mayor
     mayor = numero1;
     
    if (numero2 > mayor) {
        mayor = numero2;
    }
    
    if (numero3 > mayor) {
        mayor = numero3;
    }
    
  // Encontrar el numero menor 
     menor = numero1;
     
   if (numero2 < menor) {
        menor = numero2;
    }
    
   if (numero3 < menor) {
        menor = numero3;
        
    }
    
    // Mostrar el mayor y el menor
    cout << "El numero mayor es: " << mayor << "\n "; 
    cout << "El numero menor es: " << menor << "\n ";
    
  // Identificar la relacion entre los numeros
   if (numero1 == numero2 && numero2 == numero3) {
       cout << "Los tres numeros son iguales." << "\n ";
       
   }
    
   else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
        cout << "Hay dos iguales y uno distinto." << "\n ";
    }
   else {
        cout << "Los tres numeros son distintos." << "\n ";
      }
    
     return 0;
     
  } 








