/****************************
 *  	NOTAS ALUMNOS		*
 ****************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>

#define NOTAS 3
#define ALUMNOS 4

//Declaro los prototipos de funciones
void calculaMedia(float *matriz);
void imprimeMatriz(float *matriz);


//Función principal del programa
int main () {
	
	// Este programa rellena una matriz con las notas de los alumnos y calcula la media por alumno y la media total de todos los alumnos y exámenes

	//Declaración de variables
	int i, j;
    float nota, *matriz;

	//Reservamos la memoria de la matriz con malloc
    matriz = (float *)malloc(ALUMNOS * NOTAS * sizeof(float));

    //Imprime mensaje
    printf("\n\nEste programa calcula la media de las notas de cada alumno y la media total de todos los exámenes de todos los alumnos.");
    //Recorro la matriz para inicializarla
    for (i = 0; i < ALUMNOS; i++){
        printf("\n\tIntroduzca las notas del Alumno %d: ", (i + 1));
        for(j = 0; j < NOTAS; j++){
            nota = 0;
            printf("\n\t\tNota Exámen %d: ", (j + 1));
            scanf("%f", &nota);
            *(matriz + i * NOTAS + j) = nota;
        }
    }

    //Imprimimos mensaje y la matriz
    printf("\n\nMatriz con las notas de los alumnos es: \n\n");
    imprimeMatriz(matriz);

    //Calculamos la media
    calculaMedia(matriz);


	//Liberamos memoria
    free(matriz);

    //Fin del programa
    return 0;
}



  //////////////////////////////////
 //       CALCULA MEDIA          //
//////////////////////////////////

void calculaMedia (float *matriz){

    //Declaro las variables
    int i, j;
    float sumaAlumno, sumaTotal, mediaTotal, nota;

    sumaTotal = 0;
    //Recorro la matriz 
    for (i = 0; i < 4; i++){
        sumaAlumno = 0;
        nota = 0;
        for(j = 0; j < 3; j++){
        	sumaAlumno += *(matriz + i * 3 + j);
        }
        sumaTotal += sumaAlumno;
        nota = sumaAlumno / NOTAS;
        
        printf("\nLa nota media del Alumno %d es: %.2f",(i + 1), nota);
    }
    mediaTotal = sumaTotal / (ALUMNOS * NOTAS);

    printf("\n\nLa nota media de todos los alumnos es: %.2f.\n\n", mediaTotal);

    //Fin de la función    
    return;
}


  ///////////////////////////////
 //      IMPRIME MATRIZ       //
///////////////////////////////

void imprimeMatriz (float *matriz){

    //Declaro las variables
    int i, j;

    //Recorro la matriz para imprimirla
    for (i = 0; i < ALUMNOS; i++){
        printf("|\t");
        for (j = 0; j < NOTAS; j++){
            if(*(matriz+i*NOTAS+j) == 10)
                printf("%.2f\t",*(matriz+i*NOTAS+j));
            else
                printf("%.2f\t",*(matriz+i*NOTAS+j));
        }
        printf("|\n");
    }

    printf("\n\n");

    //Fin de la función
    return;
}