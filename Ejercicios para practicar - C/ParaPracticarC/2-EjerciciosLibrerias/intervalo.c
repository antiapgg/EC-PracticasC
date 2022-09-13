/*************************
 *   	 INTERVALO		 *
 *************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar los números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

//Declaro los prototipos de funciones
void intervalo(int ale1, int ale2);

//Función principal del programa
int main () {
	
	// Este programa lee dos números naturales y se los pasa como argumento a la funcion potencia que:
	//		POTENCIA: recibe 2 numeros enteros (base y exponente), y calcula la base elevada al exponente sin usar pow, y devuelve el resultado
	// La funcion principal MAIN imprime el resultado o un mensaje de error.

	// Declaro las variables de mi función
    int aleatorio1, aleatorio2;

    //Imprimo mensaje 
	printf("\nEste programa genera 2 numeros aleatorios entre 5 y 25, e imprimirá los aleatorios que hay entre ellos de menor a mayor.");
	
	//Inicializo la semilla de número aleatorios
	srand(time(NULL));

	//Genero el número aleatorio entre 5 y 25
	aleatorio1 = rand() % (21) + 5;
	aleatorio2 = rand() % (21) + 5;

	printf("\nLos números aleatorios calculados son: %d y %d.", aleatorio1, aleatorio2);
	printf("\nAhora vamos a calcular los números impares que hay entre ellos.");

	//Llamo a la función adivina
	intervalo(aleatorio1, aleatorio2);

	//Imprimo el resultado
	printf("\n\nFin del programa.\n\n");

	//Fin del programa
	return 0;
}


  //////////////////////
 //     INTERVALO    //
//////////////////////

void intervalo(int ale1, int ale2){

	//Declaro las variables
	int mayor, menor, i;
	
	if(ale1 > ale2){
		mayor = ale1;
		menor = ale2;
	}
	else{
		mayor = ale2;
		menor = ale1;
	}

	printf("\n\tLos números impares que hay en el intervalo [%d, %d] son:", menor, mayor);
	for(i = menor; i <= mayor; i++){
		if(i % 2 != 0){
			printf("\n\t\t%d", i);
		}
	}

	//Fin de la función
	return;
}



