/*************************
 *   	 POTENCIA		 *
 *************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 

//Declaro los prototipos de funciones
int potencia(int base, int exponente);

//Función principal del programa
int main () {
	
	// Este programa lee dos números naturales y se los pasa como argumento a la funcion potencia que:
	//		POTENCIA: recibe 2 numeros enteros (base y exponente), y calcula la base elevada al exponente sin usar pow, y devuelve el resultado
	// La funcion principal MAIN imprime el resultado o un mensaje de error.

	// Declaro las variables de mi función
    int base, exponente, resultado;

    //Imprimo mensaje para solicitar el numero
	printf("\nEste programa calcula la potencia según los datos que introduzcas.\n");
	//Solicito los datos
	printf("\n\tIntroduce la base: ");
	//Leo el valor por teclado
	scanf("%d", &base);
	//Solicito los datos
	printf("\tIntroduce el exponente: ");
	//Leo el valor por teclado
	scanf("%d", &exponente);

	resultado = potencia(base, exponente);

	if(resultado == -1){
		printf("\nERROR, los números introducidos no son números naturales.\n\n");
	}
	else{
		//Imprimimos el resultado
		printf("\nEl resultado de elevar %d a %d es: %d.\n\n", base, exponente, resultado);
	}

	//Fin del programa
	return 0;
}


  /////////////////////////
 //      POTENCIA       //
/////////////////////////

int potencia(int base, int exponente){

	//Declaración de variables
	int i, res;

	res = 1;
	if(exponente >= 0 && base >= 0){
		for (i = 0; i < exponente; i++){
			res = res * base;
		} 
	}
	else{
		res = -1;
	}

	//Fin del programa
	return res;
}
