/********************************
 *  	 CADENA ANALIZAR		*
 ********************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar diversas funciones con cadenas
#include <string.h>


//Función principal del programa
int main () {

	//Declaración de variables
	int longitud, i, contador;
	char cadena[] = "Cadena a analizar";

	longitud = strlen(cadena);

	contador = 0;

	for(i = 0; i < longitud; i++){
		if(cadena[i] == 'a'){
			contador++;
		}
	}

	//Imprimo el resultado
	printf("\n\nLa cadena 'Cadena a analizar' tiene %d letras 'a'.\n\n", contador);

	//Fin del programa
	return 0;
}


