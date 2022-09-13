/********************************
 *  		PRODUCTO			*
 ********************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar los números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

//Declaro las constantes
#define DIM 3

//Declaro los prototipos de funciones
void inicializa(int m[DIM][DIM]);
void producto(int m1[DIM][DIM], int m2[DIM][DIM], int r[DIM][DIM]);
void imprime(int m[DIM][DIM]);

//Función principal del programa
int main () {
	
	// Este programa inicializa e imprime la matriz identidad 9x9
	
	// Declaro las variables de mi función
    int matriz1[DIM][DIM],i,j,matriz2[DIM][DIM], matriz3[DIM][DIM];

    //Inicializo la semilla de número aleatorios
	srand(time(NULL));
	
	//Inicializo las matrices
	inicializa(matriz1);
	inicializa(matriz2);

	producto(matriz1, matriz2, matriz3);

	printf("\nLa matriz 1 es:\n");
	imprime(matriz1);
	printf("\nLa matriz 2 es:\n");
	imprime(matriz2);
	printf("\nEl resultado de multiplicar la matriz 1 por la 2 es:\n");
	imprime(matriz3);

//Fin del programa
return 0;

}

void inicializa(int m[DIM][DIM]) {
    int i,j;
    for (i=0;i<DIM;i++)
        for(j=0;j<DIM;j++)
            m[i][j]=rand()%5+1;

	return;
}

void producto(int m1[DIM][DIM], int m2[DIM][DIM], int r[DIM][DIM]){

	int i,j, k, aux2;
    for (i=0;i<DIM;i++)
        for(j=0;j<DIM;j++){

        	aux2 = 0;
        	for(k = 0; k < DIM; k++){
        		int aux = m1[i][k] * m2[k][j];
        		aux2 = aux2 + aux;
        	}
        	r[i][j] = aux2;
        }

	return;
}

void imprime(int m[DIM][DIM]){

	int i, j;
	for (i=0;i<DIM;i++){
        for(j=0;j<DIM;j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }

	return;
}

