//////////////////////////
// ALGORITMO Temperatura//
/////////////////////////

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
int main(){

	//Este programa convierte la temperatura introducida por teclado en Celsius a 
	//Farenheit y la imprime

	//Declaración de variables
	float celsius, farenheit;

	//Imprime un mensaje para el usuario
	printf("\nEscribe el número de grados Celsius: ");
	//Leemos con la función scanf la temperatura introducida por teclado
	scanf("%f", &celsius); //Y lo guardamos en una variable celsius

	//Convierto los celsius a farenheit
	farenheit = (celsius * 9 / 5) + 32;

	//Imprimo los resultados
	printf("\nLas grados en Farenheit son: %f\n\nFin del algoritmo.\n\n", farenheit);

	//Devolvemos un entero
	return 0;
}
