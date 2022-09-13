/****************************
 *  		MATRIZ			*
 ****************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar los números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

//Declaro las constantes
#define DIM 5

//Declaro los prototipos de funciones
void rellenaMatriz(int m[DIM][DIM]);

//Función principal del programa
int main () {
	
	// Este programa inicializa e imprime la matriz identidad 9x9
	
	// Declaro las variables de mi función
    int matriz[DIM][DIM],i,j;

    //Inicializo la semilla de número aleatorios
	srand(time(NULL));
	
	//Relleno la matriz
    rellenaMatriz(matriz);
    
    printf("\n\tLa matriz es \n\n");
    for (i=0;i<DIM;i++){
        for(j=0;j<DIM;j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
   
//Fin del programa

return 0;

}

void rellenaMatriz(int m[DIM][DIM])
{
    int i,j;
    for (i=0;i<DIM;i++)
        for(j=0;j<DIM;j++)
            m[i][j]=rand()%13+3;

	return;
}