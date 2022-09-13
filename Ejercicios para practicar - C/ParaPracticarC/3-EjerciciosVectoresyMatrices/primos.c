/****************************
 *  		PRIMOS			*
 ****************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

#define TAM 100

//Declaro los prototipos de funciones
int esprimo(int num);


//Función principal del programa
int main () {
	
	// Este programa calula los 100 primeros números primos y los almacena en un vector que muestra por pantalla.
	// 1 = PRIMO, 0 = NO PRIMO

	//Declaración de variables
	int vector[TAM], numeros, contador, i;

	contador = 0;
	numeros = 1;

	while(contador < TAM){
		if(esprimo(numeros) == 1){
			vector[contador] = numeros;
			contador++; 
		}

		numeros++;	
	}

	printf("\n\nEl vector con los 10 primeros números primos es: \n");

	printf("\t(");
	for(i = 0; i < TAM; i++){
		if(i == TAM - 1)
			printf("%d", vector[i]);
		else
			printf("%d, ", vector[i]);
	}
	printf(")\n\n");


    //Fin del programa
    return 0;
}


  ///////////////////////////////
 //  	  	 ES PRIMO    	  //
///////////////////////////////

int esprimo(int num){

	//Declaración de variables
	int i, contador, primo;

	primo = 0;
	contador = 0;

	for(i = 1; i <= num; i++){
    	if(num % i == 0) 
    		contador++;
	}

	if(contador == 2)
		primo = 1;

	//Fin de la funcion
	return primo;
}