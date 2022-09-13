/********************************
 *  		FACTORIAL		 	*
 ********************************/	

// ENTRADAS:
//   num: 	int ; Número leído
//
// SALIDAS:
//   fact: 	int ; Factorial
//
// VARIABLES
//   num: 	int 
//   fact: 	int 
//
// INICIO  
//   printf “Escribe un número: ”
//   scanf num
//   fact = 1
//	 if num > 0 then
//      while num>0 do
//        fact = fact * num
//        num = num - 1
//      endwhile
//      printf “El factorial del número es “
//      printf fact
//   else
//      printf "Error, tiene que ser un número positivo"
//   endif
//end


//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
 int main(){

 	//Este programa lee un número por pantalla e imprime su factorial 

 	//Declaración de Variables
 	int num, fact;

 	//Imprimo con printf un mensaje para que el usuario escriba el número de segundos 
 	printf("\nEscribe un número para calcular su factorial: ");

 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &num);	//Guardo el número leído en la variable

 	//Inicializamos la variable factorial
 	fact = 1;

 	//Si el número es mayor que 0
 	if (num > 0){
 		//Mientras sea mayor que 0
 		while(num > 0){
 			//Multiplicamos el factorial por el número
 			fact = fact * num;
 			//decrementamos en 1 el número
 			num = num - 1;
 		}
 		//Imprimimos el factorial resultante
 		printf("\nEl factorial del número es: %d\n\n", fact);
 	}
 	//Si no es mayor que 0
 	else{
 		//Imprimimos el mensaje de error
 		printf("\nError, el número introducido debe ser positivo.\n\n");
 	}

 	//Fin del programa
 	return 0;
 }