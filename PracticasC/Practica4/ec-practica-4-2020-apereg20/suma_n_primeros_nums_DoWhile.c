/************************************
 *  	SUMA N PRIMEROS NUMS	 	*
 ************************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
 int main(){

 	//Este programa suma los n primeros números 

 	//Declaración de Variables
 	int num, total, i;

 	//Imprimo con printf un mensaje para que el usuario escriba los números que quiere sumar
 	printf("\nEscribe cuantos números quieres sumar: ");

 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &num);	//Guardo el número leído en la variable

 	//Inicializo las variables
 	total = 0;
 	i = 1;

 	//Compruebo si el número introducido es mayor o igual que 1
 	if(num >= 1){
 		//Si es mayor que 1 hago un bucle para sumar hasta que i valga num
 		do{
 			//Calculo la suma
 			total = total + i;
 			//Incremento en 1 el valor de i
 			i = i + 1;
 		}while(i <= num);

 		//Imprimo un mensaje indicando el resultado de la suma
 		printf("\nLa suma es: %d\n", total);
 	}
 	else{
 		//Si el número introducido es menor que 1
 		printf("\nEl número introducido debe ser mayor o igual que 1.\n");
 	}

 	//Imprimo el mensaje de fin del algoritmo
 	printf("\nFin del Algoritmo.\n\n");

 	//Fin del programa
 	return 0;
 }				
