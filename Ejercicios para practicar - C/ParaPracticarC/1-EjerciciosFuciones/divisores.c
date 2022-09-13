/*************************
 *   	 DIVISORES		 *
 *************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 

//Declaro los prototipos de funciones
int calculadivisores(int num);

//Función principal del programa
int main () {
	
	// Este programa lee un numero entero n, y se lo pasa como argumento a la función calculadivisores,
	//  e imprimira el numero de divisores del numero introducido. 
	// La funcion calculadivisores, recibe el numero leído, calcula los divisores, los imprime por pantalla,
	//	y devuelve el numero de divisores que tiene el numero.

	// Declaro las variables de mi función
    int n, numDivisores;

    //Imprimo mensaje para solicitar el numero
	printf("\nEste programa calcula los divisores del número que introduzcas.");
	printf("\n\tIntroduce un número: ");
	//Leo el valor por teclado
	scanf("%d", &n);

	//Le paso el número a la función como argumento
	numDivisores = calculadivisores(n);

	printf("\n\tEl número introducido, %d, tiene %d divisores.\n\n", n, numDivisores);

    //Fin del programa
    return 0;
}

  /////////////////////////////////
 //      CALCULA DIVISORES      //
/////////////////////////////////

int calculadivisores(int num){

	//Declaro las variables de mi función
	int i, contDivisores;

	printf("\n\t\tLos divisores de %d son:", num);

	contDivisores = 0;

	for(i = 1; i <= num; i++){
    
    	//Si el numero dividido entre i tiene resto 0    
    	if(num % i == 0){
    		contDivisores += 1;
        	printf("\n\t\t\t%d",i);
    	}
	}

	return contDivisores;
}

