/*************************
 *   	 ES PRIMO		 *
 *************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 

//Declaro los prototipos de funciones
int esprimo(int num);

//Función principal del programa
int main () {
	
	// Este programa lee un entero, y llama a la funcion esprimo, que devuelve 1 si es primo y 0 si no.
	//		imprimimos el resultado


	// Declaro las variables de mi función
    int num, resultado;

    //Imprimo mensaje para solicitar el numero
	printf("\nEste programa te dice si el número introducido es primo o no.");
	//Solicito los datos
	printf("\n\tIntroduce un número: ");
	//Leo el valor por teclado
	scanf("%d", &num);

	printf("\nEl número introducido es: %d.\n", num);

	//Llamo a la funcion
	resultado = esprimo(num);

	if(resultado == 1)
		printf("\n\tEl número introducido es un número primo.\n\n");
	else
		printf("\n\tEl número introducido no es un número primo.\n\n");

	//Fin del programa
	return 0;
}


  /////////////////////////
 //      ES PRIMO       //
/////////////////////////

int esprimo(int num){

	//Declaración del variables
	int res = 1; // primo: res = 1 
				 // no primo: res = 0
	int divisores = 2;
            
    while(divisores < num  && res != 0){

        if(num % divisores == 0){
        	res = 0;
        } 
        divisores++;
    }

	//Devuelvo el resultado
	return res;
}

