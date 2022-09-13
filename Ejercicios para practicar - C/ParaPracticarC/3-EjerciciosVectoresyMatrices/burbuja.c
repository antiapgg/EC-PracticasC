/*****************************************
 * METODO BURBUJA (LEE, ORDENA, IMPRIME) *
 *****************************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 

#define TAM 15

//Declaro los prototipos de funciones
void lea(int vector[TAM]);
void ordena(int vector[TAM]);
void imprime(int vector[TAM]);

//Función principal del programa
int main () {


	// Este programa lee, ordena e imprime un vector de  15 enteros

	//Declaracion de variables
	int vector[TAM];

	printf("\n\nEste programa lee, ordena e imprime un vector de 15 enteros.\n");
	lea(vector);
	ordena(vector);
	printf("\nEl vector ordenado es:");
	imprime(vector);

	//Fin del programa
	return 0;
}


  ///////////////////////////////
 //     	 LEA		      //
///////////////////////////////

void lea(int vector[TAM]){

	//Declaración de variables
	int i, num;

	num = 0;
	for (i = 0; i < TAM; i++){

		printf("\n\tIntroduce un valor: ");
		scanf("%d", &num);
		vector[i] = num;
	}

	//Fin de la función
	return;
}


  ///////////////////////////////
 //     	ORDENA		      //
///////////////////////////////

void ordena(int vector[TAM]){

	//Declaración de variables
	int i, j, aux;

	for (i = 1; i < TAM; i++){
       for (j = 0; j < TAM - i ; j++){
          if (vector[j] > vector[j + 1]){
            	aux = vector[j];
            	vector[j] = vector[j + 1];
            	vector[j + 1] = aux;
          }
       }
	}

	//Fin de la función
	return;
}


  ///////////////////////////////
 //     	IMPRIME		      //
///////////////////////////////

void imprime(int vector[TAM]){

	//Declaración de variables
	int i;

	printf("\t[");
	for (i = 0; i < TAM; i++){
		if(i == TAM - 1)
			printf("%d", vector[i]);
		else
        	printf("%d, ", vector[i]);
    }
    printf("]\n");

	//Fin de la función
	return;
}



