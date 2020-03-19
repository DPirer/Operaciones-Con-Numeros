// Programa que realiza la suma, resta, multiplicaión y división de dos números

#include<iostream>
using namespace std;

int main(){
	
	// Definimos las varaibles
	int numero1, numero2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	// Pedimos al usuario que introduzca los dos números
	cout<<"Introduzca el primer numero: ";
	cin>>numero1;
	cout<<"Introduzca el segundo numero: ";
	cin>>numero2;
	
	// Realizamos las operaciones
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	
	// Mostramos los resultados
	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;
	
	return 0;
}
