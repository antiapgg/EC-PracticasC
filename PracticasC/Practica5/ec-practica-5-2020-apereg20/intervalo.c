/********************************
 *  	SUMA UN INTERVALO	 	*
 ********************************/


// ENTRADAS:
//	m: 	int ; Número leído
//  n: 	int ; Número leído
//
// SALIDAS:
//  suma: 	int ; Suma del intervalo
//
// VARIABLES
//  m: 		int 
//  n: 		int 
//	suma: 	int
//
// INICIO
//	do  
//   	printf “Escribe un número: ”
//   	scanf m
//   	printf “Escribe otro número, menor que el anterior: ”
//   	scanf n
//		if m < n then 
//			printf "Error, el primer número debe ser mayor que el segundo."
//		endif
//	while m < n
//	endwhile
//  suma = 0
//	while m >= n do
//   	suma = suma + m
//   	m = m - 1
//  endwhile
//	printf "La suma del intervalo es: "
//end


//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
 int main(){

 	//Este programa lee dos número por pantalla e imprime la suma del intervalo entre ambos 

 	//Declaración de Variables
 	int m, mCPY, n, suma;

 	//Mientras m no sea mayor que n hacemos
 	do{
 		//Imprimimos un mensaje para que el usuario sepa que tiene que introducir
 		printf("\nEscribe un número: ");

 		//Leemos el primer número por pantalla
 		scanf("%d", &m);

 		//Imprimimos un mensaje para que el usuario sepa que tiene que introducir
 		printf("\nEscribe otro número, debe ser menor que en anterior: ");

 		//Leemos el segundo número por pantalla
 		scanf("%d", &n);

 		//Si el primer número es menor que el primero
 		if (m < n){
 			//Imprimimos mensaje de error
 			printf("\nError, el primer número introducido debe ser mayor que el segundo.\n");
 		}
 	} while (m < n);

 	//Inicializamos la variable
 	suma = 0;
 	mCPY = m;

 	//Mientras los números introducidos sean distintos
 	while (m >= n){
 		//Añadimos el valor m a la suma
 		suma = suma + m;
 		//Decrementamos el valor de m
 		m = m - 1;
 	}

 	//Imprimimos el resultado
 	printf("\nLa suma del intervalo [%d, %d], es : %d \n\n", mCPY, n, suma);

 	//Fin del programa
 	return 0;
}