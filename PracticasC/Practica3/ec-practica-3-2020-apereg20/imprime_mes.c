/************************
 *  	IMPRIME MES	 	*
 ************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
 int main(){

 	//Este programa Imprime Mes convierte el número del mes en el nombre del mes al que corresponde.

 	//Declaración de Variables
 	int mes;

 	//Imprimo con printf un mensaje para que el usuario escriba el mes
 	printf("\nEscribe el número del mes: ");

 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &mes);	//Guardo el número leído en la variable

 	printf("\nEl mes introducido es: ");

 	//Compruebo qué nota es para imprimir la calificación
 	switch(mes){

 		case 1:
 			printf("\tEnero.\n");
 			break; //Salimos del switch porque ya entró en un caso

  		case 2:
 			printf("\tFebrero.\n");
 			break; //Salimos del switch porque ya entró en un caso		

 		case 3:
 			printf("\tMarzo.\n");
 			break; //Salimos del switch porque ya entró en un caso	

 		case 4:
 			printf("\tAbril.\n");
 			break; //Salimos del switch porque ya entró en un caso

 		case 5:
 			printf("\tMayo.\n");
 			break; //Salimos del switch porque ya entró en un caso

 		case 6:
 			printf("\tJunio.\n");
 			break; //Salimos del switch porque ya entró en un caso 	

  		case 7:
 			printf("\tJulio.\n");
 			break; //Salimos del switch porque ya entró en un caso
 
  		case 8:
 			printf("\tAgosto.\n");
 			break; //Salimos del switch porque ya entró en un caso			

 		case 9:
 			printf("\tSeptiembre.\n");
 			break; //Salimos del switch porque ya entró en un caso

  		case 10:
 			printf("\tOctubre.\n");
 			break; //Salimos del switch porque ya entró en un caso	
 			
  		case 11:
 			printf("\tNoviembre.\n");
 			break; //Salimos del switch porque ya entró en un caso	
 			
  		case 12:
 			printf("\tDiciembre.\n");
 			break; //Salimos del switch porque ya entró en un caso	

 		//Si no es ningún valor de los anteriores, le asignamos Suspenso
 		default:
 			printf("\tError, el número introducido no se corresponde con ningún mes.\n")	;

 	}	
 
 	//Imprimo el mensaje de fin del algoritmo
 	printf("\nFin del Algoritmo.\n\n");

 	//Fin del programa
 	return 0;
 }				
