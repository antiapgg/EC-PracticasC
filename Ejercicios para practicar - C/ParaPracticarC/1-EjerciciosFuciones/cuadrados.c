/*************************
 *   	 CUADRADOS		 *
 *************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 

//Declaro los prototipos de funciones
int cuadrados(int num);

//Función principal del programa
int main () {
	
	// Este programa lee un numero entero n, y se lo pasa como argumento a la función cuadrados,
	//  que calcula la suma de los cuadrados de los n primero números enteros. 
	// Si el número es negativo o 0, la función devuelve -1, y el programa imprime un mensaje de error.

	// Declaro las variables de mi función
    int n, suma;

    //Imprimo mensaje para solicitar el numero
	printf("\nEste programa calcula la suma de los cuadrados de los n primeros números.");
	printf("\n\tIntroduce un número: ");
	//Leo el valor por teclado
	scanf("%d", &n);

	//Le paso el número a la función como argumento
	suma = cuadrados(n);

	if(suma == -1){
		printf("\n\tERROR. El número introducido debe ser mayor que 0.\n\n");
	}
	else{
		printf("\n\tLa suma de los cuadrados de los %d primeros números es: %d.\n\n", n, suma);
	}

    //Fin del programa
    return 0;
}

  /////////////////////////
 //      CUADRADOS      //
/////////////////////////

int cuadrados(int num){

	//Declaro las variables de mi función
	int i, suma;

	if(num >= 1){

		suma = 0;

		for(i = 1; i <= num; i++ ){
			suma = suma + (i * i);
		}
	}
	else{
		suma = -1;
	}

	return suma;
}