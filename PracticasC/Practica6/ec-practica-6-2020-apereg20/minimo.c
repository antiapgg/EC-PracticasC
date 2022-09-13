/****************************
 *  		MINIMO			*
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
int calculaMinimo(int *matriz, int nf, int nc);


//Función principal del programa
int main () {
	
	// Este programa calula el valor minimo de una matriz nxm.
	// Para esto, solicita al usuario un numero de filas, y un numero de columnas para la matriz, 
    //   la incializa llamando a la función inicializa, que la iniciali<ará con nums entre 1 y 10.
	// Finalmente, le pasa estos datos a la funcion calculaminimo, que devuelve el valor minimo.
	
	// Declaro las variables de mi función
    int * matriz, filas, columnas, min;

    //Inicializo la semilla de número aleatorios
    srand(time(NULL));

    //Imprimo mensaje
    printf("\nEste programa calculará el valor mínimo de una matriz que se generará automáticamente. \nPara esto, debes introducir los datos solicitados: \n");
    
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

    //Inicializo la matriz
    inicializaMatriz(matriz, filas, columnas);

    //Imprimimos la matriz
    printf("\nLa matriz generada de %d filas y %d columnas es: \n\n", filas, columnas);
    imprimeMatriz(matriz, filas, columnas);

    //Llamo a la función que calcula el minimo
    min = calculaMinimo(matriz, filas, columnas);

    //Liberamos memoria
    free(matriz);

    //Imprimo resultado
    printf("\n\n\tEl valor mínimo que hay en la matriz generada es: %d.\n\n", min);

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
            *(matriz + i * nc + j)=(rand()%10)+1;

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
            if(*(matriz + i * nc + j) == 10){
                printf("%d\t",*(matriz + i * nc + j));
            }
            else{
                printf(" %d\t",*(matriz+i*nc+j));
            }  
        }

        printf("\n");
    }

    //Fin de la función
    return;
}


  ///////////////////////////////
 //      CALCULA MINIMO       //
///////////////////////////////

int calculaMinimo(int *matriz, int nf, int nc){

	//Declaro las variables necesarias.
	int min, i, j;

    //Inicializamos la variable minimo
    min = 11;

	//Calculamos el valor mínimo de la matriz 
	for (i = 0; i < nf; i++){
        for (j = 0; j < nc; j++)
    		if(* (matriz + i * nc + j) < min){
    			min = * (matriz + i * nc + j);
    		}
	}
	//Devuelvo el resultado
	return min;
}
