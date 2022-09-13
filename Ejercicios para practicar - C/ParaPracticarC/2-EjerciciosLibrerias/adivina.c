/*************************
 *   	 ADIVINA		 *
 *************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar los números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

//Declaro los prototipos de funciones
int adivina(int numero);

//Función principal del programa
int main () {
	
	// Este programa lee dos números naturales y se los pasa como argumento a la funcion potencia que:
	//		POTENCIA: recibe 2 numeros enteros (base y exponente), y calcula la base elevada al exponente sin usar pow, y devuelve el resultado
	// La funcion principal MAIN imprime el resultado o un mensaje de error.

	// Declaro las variables de mi función
    int numero, intentos;

    //Imprimo mensaje 
   	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~"); 		
	printf("\n ~  Adivinar el número.  ~");
	printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~"); 
	printf("\nEste juego consiste en que deberás adivinar el número que voy a pensar. Te daré alguna pista.");
	printf("\nMmmm.... Ya tengo el número pensado, ahora es tu turno.");
	
	//Inicializo la semilla de número aleatorios
	srand(time(NULL));

	//Genero el número aleatorio entre 0 y 100
	numero = rand() % (100 + 1);

	//Llamo a la función adivina
	intentos = adivina(numero);

	//Imprimo el resultado
	printf("\nSólo te ha llevado %d intentos. Enhorabuena.\n\n", intentos);

	//Fin del programa
	return 0;
}


  //////////////////////
 //     ADIVINA      //
//////////////////////

int adivina(int numero){

	//Declaro las variables
	int intentos, prueba;

	intentos = 1;
	do{
		//Imprimo mensaje 
		printf("\n\n\t¿En que número crees que estoy pensando?: ");
		//Solicito los datos
		scanf("%d", &prueba);

		if(prueba < numero){
			printf("\tEl número en el que estoy pensando es mayor que ese. Prueba otra vez.");
			intentos++;
		}
		else if(prueba > numero){
			printf("\tEl número en el que estoy pensando es menor que ese. Prueba otra vez.");
			intentos++;
		}
	}
	while(prueba != numero);


	//Imprimo mensaje
	printf("\n\n\t¡¡¡Has acertado!!!\n");

	//Fin de la función
	return intentos;
}



