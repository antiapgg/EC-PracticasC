/*********************
 *   	 CADENA		 *
 *********************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para usar diversas funciones con cadenas
#include <string.h>

//Declaración de funciones
void quitaespacios(char *cadena, char *cadenaSinEspacios);

//Función principal del programa
int main () {
	
	// Este programa lee por teclado una cadena de tantos caracteres como indique el usuario, y llama a la función quitaespacios que:
	//		QUITAESPACIOS: elimina los espacios en blanco de la cadena, y la guarda en otra cadena
	// La funcion MAIN imprimirá la cadena resultante
	
	// Declaro las variables de mi función
    char * cadena, * cadenaSinEspacios, vaciar;
    int longitud;

    //Imprimo mensaje para solicitar la cadena
    printf("\nEste programa solicita una cadena por teclado, de tantos caracteres como desee.\nDespués, llama a la función quitaespacios que quita los espacios en blanco, e imprime la cadena resultante.\n");
	printf("\n\tIntroduzca longitud de la cadena: ");
	//Leemos el numero introducido
	scanf("%d", &longitud);
    longitud = longitud + 1;


    //Vamos a usar punteros, por lo que reservamos espacio con malloc
    cadena = (char*)malloc(sizeof(char)*longitud);
    cadenaSinEspacios = (char*)malloc(sizeof(char)*longitud);

    while ((vaciar = getchar()) != EOF && vaciar != '\n');

    printf("\n\tIntroduzca la cadena de %d caracteres: ", longitud - 1);
    //Como queremos leer cadenas con espacios en blanco, y de longitud 100, usamos fgets:
    fgets(cadena, longitud, stdin);

    //Imprimimos la cadena completa
    printf("\n\nLa cadena introducida es:  %s", cadena);

    //Llamamos a la funcion quitaEspacios
    quitaespacios(cadena, cadenaSinEspacios);

    //Impirmimos la cadena final
    printf("\n\n\tLa cadena sin espacios es: %s", cadenaSinEspacios);

	printf("\n\n");
    
    //Liberamos memoria
    free(cadena);
    free(cadenaSinEspacios);

    //Fin del programa
    return 0;
}

  /////////////////////////////
 //      QUITAESPACIOS      //
/////////////////////////////

void quitaespacios(char *cadena, char *cadenaSinEspacios){

	//Declaracion e inicializacion de variables
	int i = 0;
	int j = 0;

	//Recorremos la cadena buscando algun espacio
	for (i = 0; i < strlen(cadena); ++i){

		//Si no encontramos, guardamos en la cadena sin espacios la letra, y aumentamos su valor.
		if (cadena[i] != ' ' && cadena[i] != '\n'){
			cadenaSinEspacios[j] = (char)cadena[i];
			j++;
		}
	}
}

