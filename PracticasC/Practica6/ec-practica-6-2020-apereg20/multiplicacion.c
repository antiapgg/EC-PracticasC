/*****************************
 *   	 MULTIPLICACIÓN		 *
 *****************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

//Declaro los prototipos de funciones
void inicializaMatriz(int *matriz, int nf, int nc);
void imprimeMatriz (int *matriz, int nf, int nc);
void multiplica(int * mA, int * mB, int * mC, int tam);


//Función principal del programa
int main () {
	
	// Este programa genera 2 matrices de tamaño n (indicado por el usuario), y calcula el producto de ambas.
	
	// Declaro las variables de mi función
    int * matrizA, * matrizB, * matrizC, tam, i;

    //Inicializo la semilla de número aleatorios
    srand(time(NULL));

    //Imprimo mensaje
    printf("\nEste programa calculará el producto entre dos matrices que se generarán automáticamente. \nPara esto, debes introducir los datos solicitados: \n");
    
    do{
    	//Imprimo mensaje para solicitar el numero de filas
    	printf("\n\tIntroduce el número de filas y columnas que tendrá tu matriz: ");
    	//Leo el valor por teclado
    	scanf("%d", &tam);

    	if(tam <= 0){
    		printf("\n\tError. El número de filas y columnas debe ser mayor que 0.");
    	}
    }while(tam < 0);

    //Reservamos la memoria de la matriz con malloc
    matrizA = (int *)malloc(tam * tam * sizeof(int));
    matrizB = (int *)malloc(tam * tam * sizeof(int));
    matrizC = (int *)malloc(tam * tam * sizeof(int));

    //Inicializo la matriz
    inicializaMatriz(matrizA, tam, tam);
    inicializaMatriz(matrizB, tam, tam);

    //Imprimimos la matriz
    printf("\nLas matrices generadas tienen %d filas y %d columnas.\n", tam, tam);
    printf("\nMATRIZ A: \n");
    imprimeMatriz(matrizA, tam, tam);
    printf("\nMATRIZ B: \n");
    imprimeMatriz(matrizB, tam, tam);

    //Llamo a la función que calcula el producto de la matrices A y B
    multiplica(matrizA, matrizB, matrizC, tam);

    //Liberamos memoria
    free(matrizA);
    free(matrizB);

    //Imprimo resultado
    printf("\n\nLa multiplicación de estas dos matrices da como resultado la matriz C. \n\nMATRIZ C: \n");
    imprimeMatriz(matrizC, tam, tam);

    printf("\n\n");

    //Liberamos memoria
    free(matrizC);
   
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
            *(matriz + i * nc + j)=(rand()%(10) + 1);

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

void multiplica(int * mA, int * mB, int * mC, int tam){

    //Declaro las variables necesarias.
     int i,j, k, aux2;

    //Calculamos el producto de A y B
    for (i = 0; i < tam; i++)
        for(j = 0; j < tam; j++){
            aux2 = 0;
            for(k = 0; k < tam; k++){
                int aux = *(mA + i * tam + k) * *(mB + k * tam + j);
                aux2 = aux2 + aux;
            }
            *(mC + i * tam + j) = aux2;
        }

    //Devuelvo el resultado
    return;
}
