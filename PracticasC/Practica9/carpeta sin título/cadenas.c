/*********************
 *      CADENAS		 *
 *********************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar diversas funciones con cadenas
#include <string.h>

#define NUMCARACS 100


//Función principal del programa
int main(int argc, char const *argv[3]){
	
	// Este programa recibe una cadena y un número como argumentos. 
	// La función MAIN lee otra cadena de máxim 100 caracteres y calcula:
	//		La longitud de la cadena introducida por teclado y la muestra por pantalla
	//		Concatena la cadena introducida con la cadena 􏰁"Cadena añadida􏰂" y la muestra por pantalla
	// 		Busca si contiene la cadena recibida como argumento y si la contiene lo indica por pantalla
	// 		Muestra la letra que ocupa la posición indicada por el num recibido como argumento. 

	//Defclaración de variables
	char cadena[NUMCARACS];
	char cadenaConcatenada[NUMCARACS + 20];
	int longitud, posicion;

	if (argc!=3){
		printf("\n\nError, el número de argumentos no es válido.\nLa sintaxis es: nombreprograma \"cadena\" número");
	}
	else {

		//Imprimo mensaje
	    printf("\nEste programa recibe una cadena y un número como argumentos, y le solicitará una nueva cadena.");
	    printf("\nDespués, mostrará la longitud de la cadena por pantalla, concatenará la cadena introducida con 'Cadena añadida' y la mostrará por pantalla, buscará si contiene la cadena recibida por argumento y si la tiene lo indicará por pantalla, y muestra la letra de la posición indicada por argumento. \n");
	    

		//Imprimo mensaje para solicitar la cadena
		printf("\n\tIntroduce una cadena: ");
		//Leo la cadena
		fgets(cadena, 100, stdin);
		//Quitamos el \n final
		strtok(cadena, "\n");

		longitud = strlen(cadena);

		//Imprimimos la longitud de la cadena
		printf("\n\nLa longitud de la cadena \"%s\" es %d ", cadena, longitud);

		//Concatenamos la cadena e imprimimos el resultado
		printf("\nLa cadena concatenada es: %s.", strcat(cadena,"Cadena añadida"));

		if (strstr(cadena, argv[1]) != NULL)
			printf("\nLa cadena SÍ tiene la cadena %s", argv[1]);
		else
			printf("\nLa cadena NO tiene la cadena %s", argv[1]);

		//Guardamos la posición en la variable
		posicion = atoi(argv[2]);

		//Imprimimos el resultado
		printf("\nLa letra de la posición %d de la cadena es %c.\n\n", posicion, cadena[posicion - 1]);

	}

	//Fin del programa
	return 0;
}