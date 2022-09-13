/************************************
 *  		NUMEROS PARES			*
 ************************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h>
#include <math.h>

void imprimeNumerosPares(int num1, int num2);

//Función principal del programa
 int main(){

 	// Este programa lee 2 numeros y comprueba si el primero es menor que el segundo
 	// Si no es asi -> Error
 	// Si los numeros son correctos, imprime todos los pares del mayor al menor

 	//Declaración de Variables
 	int num1, num2;

 	//Imprimo con printf un mensaje para el usuario
 	printf("\nIntroduce el primer número: ");
 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &num1);	//Guardo el número leído en la variable
 	//Imprimo con printf un mensaje para el usuario
 	printf("\nIntroduce el segundo número: ");
 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &num2);	//Guardo el número leído en la variable

 	if(num1 > num2){
 		printf("\n\nERROR, el primer número no es menor que el segundo.\n");
 	}
 	else{
 		imprimeNumerosPares(num1, num2);
 	}

 	return 0;
 }

 void imprimeNumerosPares(int num1, int num2){

 	int i;

 	printf("\n");

 	for(i = num2; i >= num1; i--){
 		if(i % 2 == 0){
 			printf(" %d ", i);
 		}
 	}
 	printf("\n\n");
 }