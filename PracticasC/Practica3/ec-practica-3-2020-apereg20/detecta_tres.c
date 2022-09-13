/****************************
 *		DETECTA TRES		*
 ****************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
 int main(){

 	//Este programa Detecta Tres indica si el número leído por teclado es 3

 	//Declaración de Variables
 	int numLeido;

 	//Imprimo con printf un mensaje para que el usuario escriba el número 
 	printf("\nEscribe un número: ");

 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &numLeido);	//Guardo el número leído en la variable

 	//Compruebo si el número introducido es 3
 	if(numLeido == 3){

 		//Si el número es 3, imprimo un mensaje diciendo que es correcto
 		printf("\nEl número introducido es el 3.");
 	}
 	else{
 		//Si el número introducido no es el 3, imprimimos otro mensaje
 		printf("\nEl número introducido no es el 3.");
 	}

 	//Imprimo el mensaje de fin del algoritmo
 	printf("\n\nFin del Algoritmo.\n\n");

 	//Fin del programa
 	return 0;
 }