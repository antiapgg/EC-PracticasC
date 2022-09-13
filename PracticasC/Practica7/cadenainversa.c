/************************
 *    CADENA INVERSA    *
 ************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para usar diversas funciones con cadenas
#include <string.h>

//Declaración de funciones
void invierte(char *cadenaOrigen, char *cadenaDestino);

//Función principal del programa
int main () {
	
	// Este programa lee por teclado una cadena de maximo 100 caracteres, y llama a la funcion invierte que:
	//		INVIERTE: invierte la cadena, y la guarda en otra cadena que le pasamos como argumento.
	// La funcion MAIN imprimirá la cadena resultante
	
	// Declaro las variables de mi función
    char *cadenaOrigen, *cadenaDestino;
    int longitud = 100;

    //Imprimo mensaje para solicitar la cadena
    printf("\nEste programa solicita una cadena por teclado, de máximo 100 caracteres.\nDespués, llama a la función inivierte, que invierte la cadena, e imprime la cadena resultante.\n");

    //Vamos a usar punteros, por lo que reservamos espacio con malloc
    cadenaOrigen = (char*)malloc(sizeof(char)*longitud);
    cadenaDestino = (char*)malloc(sizeof(char)*longitud);

    printf("\n\tIntroduzce la cadena: ");

    //Como queremos leer cadenas con espacios en blanco, y de longitud 100, usamos fgets:
    fgets(cadenaOrigen, longitud, stdin);

    //Imprimimos la cadena completa
    printf("\n\nLa cadena introducida es:  %s", cadenaOrigen);

    //Llamamos a la funcion invierte
    invierte(cadenaOrigen, cadenaDestino);

    //Impirmimos la cadena final
    printf("\n\n\tLa cadena invertida es: %s", cadenaDestino);

	printf("\n\n");
    
    //Liberamos memoria
    free(cadenaOrigen);
    free(cadenaDestino);

    //Fin del programa
    return 0;
}

  /////////////////////////////
 //      QUITAESPACIOS      //
/////////////////////////////

void invierte(char *cadenaOrigen, char *cadenaDestino){

	//Declaracion e inicializacion de variables
	int i = 0;
	int j = strlen(cadenaOrigen) - 1;

    //Recorremos la cadena origen en un sentido, y vamos guardando los datos en la destino en sentido contrario
    for (i = 0; i < strlen(cadenaOrigen) - 1; i++){
        *(cadenaDestino+(j-1)) = *(cadenaOrigen+i);
        j--;
    }
}