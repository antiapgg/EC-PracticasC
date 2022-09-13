/****************************
 *		CALCULA NOTA		*
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
 	if((nota == 5) || (nota == 6)){
 		//Imprimo mensaje con la calificación
 		printf("\nAprobado.\n");
 	}
 	else{
 		if((nota == 7) || (nota == 8)){
 			//Imprimo mensaje con la calificación
 			printf("\nNotable.\n");
 		}
 		else{
			if((nota == 9) || (nota == 10)){
				//Imprimo mensaje con la calificación
				printf("\nSobresaliente.\n");
			}
			else{
				//Imprimo mensaje con la calificación
				printf("\nSuspenso.\n");
			}
 		}
 	}

 	//Imprimo el mensaje de fin del algoritmo
 	printf("\nFin del Algoritmo.\n\n");

 	//Fin del programa
 	return 0;
 }
