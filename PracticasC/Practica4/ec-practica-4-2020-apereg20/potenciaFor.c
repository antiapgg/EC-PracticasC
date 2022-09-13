/************************
 *  	POTENCIA	 	*
 ************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
 int main(){

 	//Este programa suma los n primeros números 

 	//Declaración de Variables
 	int base, exp, pot, i;

 	//Imprimo con printf un mensaje para que el usuario escriba la base 
 	printf("\nEscribe un número (base): ");

 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &base);	//Guardo el número leído en la variable

 	//Imprimo con printf un mensaje para que el usuario escriba el exponente
 	printf("\nEscribe un número (exponente): ");

 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &exp);	//Guardo el número leído en la variable

 	//Compruebo que la base y el exponente sean mayores que 1
 	if((base >= 1) && (exp >= 1)){
 		//Inicializo las variables
 		pot = 1;
 		i = 1;

 		for(i = exp; i >= 1; i--) {
 			pot = pot * base;
 		}
 		//Imprimo un mensaje con el resultado de la potencia
 		printf("\nLa potencia es: %d\n", pot);
 	}
 	else{
 		//Si alguno de los datos no es mayor que 1, imprimo mensaje de error
 		printf("\nLa base y el exponente deben ser mayores o iguales que 1.\n");
 	}

 	//Imprimo el mensaje de fin del algoritmo
 	printf("\nFin del Algoritmo.\n\n");

 	//Fin del programa
 	return 0;
 }				 
