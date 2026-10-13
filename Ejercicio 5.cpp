
#include <iostream>
using namespace std;

int main() {
  // Declarar las variables
	float lado1, lado2, lado3, perimetro;

  // Pedir los tres lados por teclado
	cout << "Ingrese el primer lado: ";
	cin >> lado1;

	cout << "Ingrese el segundo lado: ";
	cin >> lado2;

	cout << "Ingrese el tercer lado: ";
	cin >> lado3;

  // Validar que los lados sean mayores que cero
	if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
		cout << "Error: todos los lados deben ser mayores que cero." << "\n ";
	}
  // Verificar la desigualdad triangular
   else if (lado1 + lado2 <= lado3 || 
      lado1 + lado3 <= lado2 || 
     lado2 + lado3 <= lado1) { 
         cout << "Los lados no forman un triangulo." << "\n "; 
    }
    else {
   // Calcular el perimetro 
   perimetro = lado1 + lado2 + lado3;
       cout << "El perimetro del triangulo es: " << perimetro << "\n ";
   
   // Clasificar el triangulo    
     if (lado1 == lado2 && lado2 == lado3) {
        cout << "Tipo de triangulo: Equilatero" << "\n ";
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "Tipo de triangulo: Isosceles" << "\n ";
    }
    else {
        cout << "Tipo de triangulo: Escaleno" << "\n ";
      }
   
    }
    
     return 0;
     
    } 








