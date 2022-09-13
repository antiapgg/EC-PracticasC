/****************************
 *  	 MINIMO FILAS		*
 ****************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

//Declaro los prototipos de funciones
void inicializaMatriz(int *matriz, int nf, int nc);
void imprimeMatriz (int *matriz, int nf, int nc);
void minimoFilas(int *matriz, int *vector, int nf, int nc);


//Función principal del programa
int main () {
	
	// Este programa calula el valor minimo cada fila de una matriz nxm.
	// Para esto, solicita al usuario un numero de filas, y un numero de columnas para la matriz, 
    //   la incializa llamando a la función inicializa, que la inicializará con nums entre -10 y 10.
	// Finalmente, le pasa estos datos a la funcion minimoFilas, y un vector en el que almacenará el valor minimo de cada fila.
	
	// Declaro las variables de mi función
    int * matriz, *vector, filas, columnas, i;

    //Inicializo la semilla de número aleatorios
    srand(time(NULL));

    //Imprimo mensaje
    printf("\nEste programa calculará el valor mínimo de cada fila de una matriz que se generará automáticamente. \nPara esto, debes introducir los datos solicitados: \n");
    
    do{
    	//Imprimo mensaje para solicitar el numero de filas
    	printf("\n\tIntroduce el número de filas que tendrá tu matriz: ");
    	//Leo el valor por teclado
    	scanf("%d", &filas);

    	if(filas <= 0){
    		printf("\n\tError. El número de filas debe ser mayor que 0.");
    	}
        else{
            //Imprimo mensaje para solicitar el numero de columnas
            printf("\n\tIntroduce el número de columnas que tendrá tu matriz: ");
            //Leo el valor por teclado
            scanf("%d", &columnas);

            if(filas <= 0){
                printf("\n\tError. El número de columnas debe ser mayor que 0.");
            }
        }

    }while(columnas < 0);

    //Reservamos la memoria de la matriz con malloc
    matriz = (int *)malloc(filas * columnas * sizeof(int));
    vector = (int *)malloc(filas * sizeof(int));

    //Inicializo la matriz
    inicializaMatriz(matriz, filas, columnas);

    //Imprimimos la matriz
    printf("\nLa matriz generada de %d filas y %d columnas es: \n\n", filas, columnas);
    imprimeMatriz(matriz, filas, columnas);

    //Llamo a la función que calcula el minimo
    minimoFilas(matriz, vector, filas, columnas);

    //Liberamos memoria
    free(matriz);

    //Imprimo resultado
    printf("\n\n\tEl valor mínimo de cada fila en la matriz generada es: ");
    for (i = 0; i < filas; i++)
    	printf("\t%d", * (vector + i));

    printf("\n\n");

    //Liberamos memoria
    free(vector);
   
    //Fin del programa
    return 0;
}


  //////////////////////////////////
 //      INICIALIZA MATRIZ       //
//////////////////////////////////

void inicializaMatriz (int *matriz, int nf, int nc){

    //Declaro las variables
    int i, j;

    //Recorro la matriz para inicializarla
    for (i = 0; i < nf; i++)
        for(j = 0; j < nc; j++)
            *(matriz + i * nc + j) = (rand() % (10 - (-10) + 1) + (-10));

    //Fin de la función    
    return;
}


  ///////////////////////////////
 //      IMPRIME MATRIZ       //
///////////////////////////////

void imprimeMatriz (int *matriz, int nf, int nc){

    //Declaro las variables
    int i, j;

    //Recorro la matriz para imprimirla
    for (i = 0; i < nf; i++){
        for (j = 0; j < nc; j++){
        	if(*(matriz + i * nc + j) == -10){
        		printf("%d\t",*(matriz + i * nc + j));
        	}
        	else if(*(matriz + i * nc + j) < 0 || *(matriz + i * nc + j) == 10){
            	printf(" %d\t",*(matriz + i * nc + j));
        	}
        	else{
        		printf("  %d\t",*(matriz + i * nc + j));
        	}
        }

        printf("\n");
    }

    //Fin de la función
    return;
}


  ////////////////////////////////////
 //      CALCULA MINIMO FILAS      //
////////////////////////////////////

void minimoFilas(int *matriz, int *vector, int nf, int nc){

	//Declaro las variables necesarias.
	int min, i, j;

	//Calculamos el valor mínimo de la matriz 
	for (i = 0; i < nf; i++){

		//Inicializamos la variable minimo
		min = 11;

        for (j = 0; j < nc; j++){
    		if(* (matriz + i * nc + j) < min){
    			* (vector + i) = * (matriz + i * nc + j);
    			min = * (matriz + i * nc + j);
    		}
    	}
	}
	//Devuelvo el resultado
	return;
}
