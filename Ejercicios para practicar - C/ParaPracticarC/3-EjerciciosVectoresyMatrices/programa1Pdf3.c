/****************************
 *   INICIALIZA E IMPRIME	*
 ****************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

#define TAM 10

//Declaro los prototipos de funciones
void inicializaMatriz(int matriz[TAM][TAM]);
void imprimeMatriz (int matriz[TAM][TAM]);

//Función principal del programa
int main () {
	
	// Este programa rellena una matriz 10x10 con números aleatorios de 1 a 100 y la imprime por pantalla.
	
	// Declaro las variables de mi función
    int matriz[TAM][TAM];

    //Inicializo la semilla de número aleatorios
    srand(time(NULL));

    //Imprimo mensaje
    printf("\nEste programa rellenará una matriz de tamaño 10x10 con números aleatorios entre 1 y 100. \n\tLa matriz resultante es: \n");
  	
  	inicializaMatriz(matriz);
  	imprimeMatriz(matriz);

  	//Fin del programa
  	return 0;
}



  //////////////////////////////////
 //      INICIALIZA MATRIZ       //
//////////////////////////////////

void inicializaMatriz (int matriz[TAM][TAM]){

    //Declaro las variables
    int i, j;

    //Recorro la matriz para inicializarla
    for (i = 0; i < TAM; i++)
        for(j = 0; j < TAM; j++)
            matriz[i][j] = (rand() % 100) + 1;

    //Fin de la función    
    return;
}


  ///////////////////////////////
 //      IMPRIME MATRIZ       //
///////////////////////////////

void imprimeMatriz (int matriz[TAM][TAM]){

    //Declaro las variables
    int i, j;

    //Recorro la matriz para imprimirla
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            if(matriz[i][j] == 100){
                printf("%d\t", matriz[i][j]);
            }
            else if(matriz[i][j] >= 10){
                printf(" %d\t", matriz[i][j]);
            } 
            else{
            	printf("  %d\t", matriz[i][j]);
            } 
        }

        printf("\n");
    }
    printf("\n");

    //Fin de la función
    return;
}
