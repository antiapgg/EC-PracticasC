/************************************
 *  		SUMA COLUMNAS			*
 ************************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar los números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

//Declaro las constantes
#define DIM 3
#define DIM2 6

//Declaro los prototipos de funciones
void rellenaMatriz(int m[DIM][DIM2]);
int sumaColumnas(int m[DIM][DIM2], int v[DIM2]);

//Función principal del programa
int main () {
	
	// Este programa inicializa e imprime la matriz identidad 9x9
	
	// Declaro las variables de mi función
    int matriz[DIM][DIM2],i,j, sum, vector[DIM2];

    //Inicializo la semilla de número aleatorios
	srand(time(NULL));
	
	//Relleno la matriz
    rellenaMatriz(matriz);
    
    printf("\n\tLa matriz es \n\n");
    for (i=0;i<DIM;i++){
        for(j=0;j<DIM2;j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("\nLa suma de los números de la matriz por columnas es: %i", sumaColumnas(matriz, vector));
    for(j=0;j<DIM2;j++)
            printf("%d\t", vector[j]);

    printf("\n\n");

   
//Fin del programa

return 0;

}

void rellenaMatriz(int m[DIM][DIM2]) {
    int i,j;
    for (i=0;i<DIM;i++)
        for(j=0;j<DIM2;j++)
            m[i][j]=rand()%10+1;

	return;
}

int sumaColumnas(int m[DIM][DIM2], int v[DIM2]) {

	int suma, i, j;

	suma = 0;
	
	for (i=0;i<DIM;i++)
        for(j=0;j<DIM2;j++)
        	v[j] = v[j] + m[i][j];

	return suma;
}

