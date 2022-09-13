/****************************
 *  		MATRIZ			*
 ****************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>

#define TAM 5

//Declaro los prototipos de funciones
void inicializaMatriz(int *matriz);
void imprimeMatriz(int *matriz);


//Función principal del programa
int main () {
	
	// Este programa rellena una matriz identidad de tamaño 5x5 y la imprime

	//Declaración de variables
	int *matriz;

	//Reservamos la memoria de la matriz con malloc
    matriz = (int *)malloc(TAM * TAM * sizeof(int));

    //Inicializamos la matriz
    inicializaMatriz(matriz);

    //Imprimimos mensaje y la matriz
    printf("\n\nMatriz Identidad 5x5: \n\n");
    imprimeMatriz(matriz);

	//Liberamos memoria
    free(matriz);

    //Fin del programa
    return 0;
}



  //////////////////////////////////
 //      INICIALIZA MATRIZ       //
//////////////////////////////////

void inicializaMatriz (int *matriz){

    //Declaro las variables
    int i, j;

    //Recorro la matriz para inicializarla
    for (i = 0; i < TAM; i++)
        for(j = 0; j < TAM; j++)
        	if(i == j)
            	*(matriz + i * TAM + j) = 1;
            else
            	*(matriz + i * TAM + j) = 0;

    //Fin de la función    
    return;
}


  ///////////////////////////////
 //      IMPRIME MATRIZ       //
///////////////////////////////

void imprimeMatriz (int *matriz){

    //Declaro las variables
    int i, j;

    //Recorro la matriz para imprimirla
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            printf("%d\t",*(matriz+i*TAM+j));
        }

        printf("\n");
    }

    printf("\n\n");

    //Fin de la función
    return;
}