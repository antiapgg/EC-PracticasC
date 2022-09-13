/////////////////////////
// ALGORITMO Convierte //
////////////////////////

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
int main(){

	//Este programa convierte los km leídos en millas, yardas y pies, 
	//mostrando los resultados por pantalla

	//Declaración de variables
	float km, millas, yardas, pies;

	//Imprime un mensaje para el usuario
	printf("\nEscribe el número de kilómetros: ");
	//Leemos con la función scanf el número de kilómetros introducido por teclado
	scanf("%f", &km); //Y lo guardamos en una variable km

	//Convierto los km a millas
	millas = km / 1.60;

	//Convierto los km a pies
	pies = km * 100000 / 30.48;

	//Convieto los km a yardas
	yardas = km * 100000 / 91.44;

	//Imprimo los resultados
	printf("\nLas millas son: %f\nLos pies son: %f\nLas yardas son: %f\n\nFin del algoritmo.\n\n", millas, pies, yardas);

	//Devolvemos un entero
	return 0;
}
