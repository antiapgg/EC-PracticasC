/*********************
 *   	 COPIA		 *
 *********************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para usar diversas funciones con cadenas
#include <string.h>

//Función principal del programa
int main () {
	
	// Este programa lee por teclado una cadena de máximo 100 caracteres e imprime por pantalla:
	//		Su longitud (con strlen)
	//			Si es igual a la cadena "compara" (con strcmp)
	//			La concatenamos con la cadena añadida (con strcat)
	
	// Declaro las variables de mi función
    char * cadena;
    int longitud;

    //Vamos a usar punteros, por lo que reservamos espacio con malloc
    cadena = (char*)malloc(sizeof(char)*100);

    //Imprimo mensaje para solicitar la cadena
    printf("\nEste programa solicita una cadena por teclado, de 100 caracteres como longitud máxima.\nDespués, calcula su longitd, la compara con la cadena 'compara', y la concatena con la cadena 'añadida'.\n");
	printf("\n\tIntroduzca la cadena: ");
    //Como queremos leer cadenas con espacios en blanco, y de longitud 100, usamos fgets:
    fgets(cadena, 100, stdin);

    //Imprimimos la cadena completa
    printf("\nSu cadena es:  %s", cadena);

    //Calculamos el tamaño de la cadena: 
    longitud = strlen(cadena)-1;
    printf("\n\tLa longitud de la cadena introducida es: %d.", longitud);

    //La comparamos con la cadena 'compara'
	if(strcmp(cadena, "compara\n") == 0){
		printf("\n\tLa cadena es igual a 'compara'.");
	}else{
		printf("\n\tLa cadena es distinta a 'compara'.");
	}

	strcat(cadena, "añadida");

	for (int i = 0; i < strlen(cadena); ++i){
		if(i == 0)
			printf("\n\tLa nueva cadena es:  ");
		if (cadena[i] != '\n'){
			printf("%c", cadena[i]);
		}else{
			printf(" ");
		}
	}

	printf("\n\n");
    
    //Liberamos memoria
    free(cadena);

    //Fin del programa
    return 0;
}