/****************************
 *  	CALCULA NOTA V2	 	*
 ****************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
 int main(){

 	//Este programa Calcula Nota convierte una nota numérica a su calificación correspondiente

 	//Declaración de Variables
 	int nota;

 	//Imprimo con printf un mensaje para que el usuario escriba la nota
 	printf("\nEscribe la nota numérica: ");

 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &nota);	//Guardo el número leído en la variable

 	//Compruebo qué nota es para imprimir la calificación
 	switch(nota){

 		//Si la nota es 5 o 6, imprimimos la calificación de Aprobado
 		case 5:
 		case 6:
 			printf("\nAprobado.\n");
 			break; //Salimos del switch porque ya entró en un caso

		//Si la nota es 7 o 8, imprimimos la calificación de Notable
 		case 7:
 		case 8:
 			printf("\nNotable.\n");
 			break; //Salimos del switch porque ya entró en un caso

 		//Si la nota es 9 o 10, imprimimos la calificación de Sobresaliente
 		case 9:
 		case 10:
 			printf("\nSobresaliente.\n");
 			break; //Salimos del switch porque ya entró en un caso
 		
 		//Si no es ningún valor de los anteriores, le asignamos Suspenso
 		default:
 			printf("\nSuspenso\n");

 	}

 	//Imprimo el mensaje de fin del algoritmo
 	printf("\nFin del Algoritmo.\n\n");

 	//Fin del programa
 	return 0;
 }