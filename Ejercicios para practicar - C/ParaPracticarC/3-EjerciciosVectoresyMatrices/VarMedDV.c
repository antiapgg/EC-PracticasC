/**************************************
 * VARIANZA MEDIA Y DESVIACION TIPICA *
 **************************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para funciones sqrt, pow
#include <math.h>

#define TAM 15

//Declaro los prototipos de funciones
float varianza(int vector[TAM], float media);
float media(int vector[TAM]);
float desviacionTipica(int vector[TAM], float varianza);


//Función principal del programa
int main () {
	
	// Este programa lee 15 enteros por teclado, los guarda en un vector, y calcula su varianza, media y deviacion tipica.

	//Declaracion de variables
	int num, i, vector[TAM];
	float var, med, devtipica;

	printf("\n\nEste programa calcula la varianza, media y desviación típica de los 15 números que introduzcas.");

	for(i = 0; i < TAM; i++){
		printf("\n\n\tIntroduce un número: ");
		scanf("%d", &num);
		vector[i] = num;
	}


	med = media(vector);	
	var = varianza(vector, med);
	devtipica = desviacionTipica(vector, var);

	printf("\n\nLa varianza de los %d números es: %.2f", TAM, var);
	printf("\n\nLa media de los %d números es: %.2f", TAM, med);
	printf("\n\nLa desviación típica de los %d números es: %.2f.\n\n", TAM, devtipica);

	//Fin del programa
	return 0;
}



  ///////////////////////////////
 //   	     VARIANZA  	      //
///////////////////////////////

float varianza(int vector[TAM], float media){

	//Declaración de variables
	int i;
	float varianza;

	for(int i = 0 ; i < TAM; i++){

   		varianza += pow(vector[i] - media, 2);
  	}

  	varianza = varianza / TAM;

   	//Fin de la función
  	return varianza;
}



  ///////////////////////////////
 //     	 MEDIA 		      //
///////////////////////////////

float media(int vector[TAM]){

	//Declaración de variables
	int i;
	float media;

	for(int i = 0 ; i < TAM; i++){

   		media += vector[i];
   	}

   	media = media / TAM;

   	//Fin de la función
   	return media;
}



  ///////////////////////////////
 //     DESVIACION TIPICA     //
///////////////////////////////
float desviacionTipica(int vector[TAM], float varianza){

	float desvTipica;

	desvTipica = sqrt(varianza);

   	//Fin de la función
   	return desvTipica;
}





