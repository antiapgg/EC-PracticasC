//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>
//Librería para usar diversas funciones con cadenas
#include <string.h>

#define NUMCARACS 100

//Declaración de funciones
void inicializa(int *matriz, int filas, int columnas);
float media(int *matriz, int filas, int columnas);
char sacaletra(char *cadena, int posicion);

//Función principal del programa
int main(int argc, char const *argv[3]){

	//Declaración de variables
	int *matriz;
	int filas, columnas, posicion;
	float med;
	char letra, cadena[100];

	if(argc != 3){
		printf("\nError. El número de argumentos introducidos no es válido.\n\n");
	}
	else{

		srand(time(NULL));

		filas = atoi(argv[1]);
		columnas = atoi(argv[2]);

		matriz = (int *)malloc(filas * columnas * sizeof(int));

		inicializa(matriz, filas, columnas);

		med = media(matriz, filas, columnas);

		//Liberamos memoria
		free(matriz);

		printf("\nEl resultado de la media de los elementos de la matriz es: %f.", med);

		printf("\n\nIntroduce una cadena de como máximo 100 caracteres: ");
		fgets(cadena, 100, stdin);

		do{
			printf("\nIntroduce un entero que se corresponda con una posición de la cadena: ");
			scanf("%d", &posicion);

			if((posicion < 1) || (posicion > 99)){
				printf("\nError. La posición introducida no es válida. Por favor, inténtelo de nuevo.");
			}
		}
		while((posicion < 1) || (posicion > 99));

		letra = sacaletra(cadena, posicion);

		printf("\nLa letra que se encuentra en la posición %d de la cadena es: %c.\n\n", posicion, letra);

	}

	//Fin del programa
	return 0;
}


void inicializa(int *matriz, int filas, int columnas){

	//Declaración de variables
    int i, j;

    for (i = 0; i < filas; i++)
        for(j = 0; j < columnas; j++)
            *(matriz + i * columnas + j)=(rand()%5)+3;

    //Fin de la función    
    return;
}


float media(int *matriz, int filas, int columnas){

	//Declaración de variables
    int i, j, suma;
    float media;

    suma = 0;

    for (i = 0; i < filas; i++)
        for(j = 0; j < columnas; j++)
        	suma += * (matriz + i * columnas + j);

    media = suma / (filas * columnas);

    //Devuelvo la media
    return media;
}


char sacaletra(char *cadena, int posicion){

	char letra;

	letra = cadena[posicion - 1];

	//Devuelvo la letra
	return letra;
}





