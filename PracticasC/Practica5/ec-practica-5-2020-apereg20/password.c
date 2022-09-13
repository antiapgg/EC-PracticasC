/********************************
 *  		PASSWORDS			*
 ********************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar los números aleatorios
#include <stdlib.h>
//Librería para obtener la fecha actual
#include <time.h>

//Defino el tamaño del alfabeto y de la contraseña
#define TAM 26
#define TAM_PASS 8

//Declaro los prototipos de funciones
void inicializa(char letras[TAM]);

//Función principal del programa
int main () {
	
	// Este programa genera contraseñas aleatorias de 8 minúsculas 
	// Declaro las variables de mi función
	char abecedario[TAM], password[TAM_PASS+1];
	int num, i;

	//Inicializo la semilla de número aleatorios
	srand(time(NULL));

	//Inicializo el abecedario
	inicializa(abecedario);

	// Genero 8 aleatorios y guardo cada letra
	for(i=0;i<TAM_PASS;i++){
		//Elijo un número aleatoriamente entre 0 y TAM-1
		num=rand()%TAM;
		password[i]=abecedario[num];
	}
	password[TAM_PASS]='\0';
	printf("\nEste programa genera una contraseña aleatoria de 8 letras minúsculas.\n\tLa contraseña es %s", password);
	printf("\n");
	
//Fin del programa

return 0;

}

void inicializa(char letras[TAM]){
	int i,aux=97;
	for(i=0;i<TAM;i++)
		letras[i]=aux++;

	return;
}