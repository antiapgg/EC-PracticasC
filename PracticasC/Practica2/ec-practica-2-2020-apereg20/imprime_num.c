///////////////////////////
// ALGORITMO Imprime_Num //
//////////////////////////

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
int main(){

	//Declaración de variables
	int num = 0;

	//Imprime un mensaje para el usuario
	printf("\nIntroduce un número entero: ");
	//Leemos con la función scanf el número introducido por teclado
	scanf("%d", &num);
	//Imprime el número que introdujo el usuario
	printf("\nEl número que acaba de introducir es: %d\n", num);

	//Imprime mensaje de despedida
	printf("\nFin del algoritmo.\n\n");

	//Devolvemos un entero
	return 0;
}

