/****************************
 *  		MAXIMO			*
 ****************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros
#include <stdlib.h>


//Declaro los prototipos de funciones
int calculamaximo(int *nums, int tam);


//Función principal del programa
int main () {
	
	// Este programa calula el valor maximo de un puntero de n enteros.
	// Para esto, solicita al usuario un tamaño para el puntero, lo incializa, 
	//  y almacena el numero de enteros indicado, con los datos que introduce el usuario.
	// Finalmente, le pasa estos datos a la funcion calculamaximo, que devuelve el valor maximo.
	
	// Declaro las variables de mi función
    int tam, * numeros, cont, max, i;

    do{
    	//Imprimo mensaje para solicitar el numero de elementos
    	printf("\nIntroduce cuantos datos vas a almacenar: ");
    	//Leo el valor por teclado
    	scanf("%d", &tam);

    	if(tam <= 0){
    		printf("\nError. El número de datos debe ser mayor que 0.");
    	}

    }while(tam < 0);

    // Reservamos la memoria del puntero con malloc
    numeros = (int *)malloc(tam * sizeof(int));

    //Inicializo mi contador
    cont = 0;

    while(cont < tam){

    	//Imprimo mensaje solicitando datos
    	printf("\n\tIntroduce un número en el puntero: ");

    	//Leo el número que me proporciona el usuario, y los guardo en el puntero
    	scanf("%d", numeros+cont);

    	//Incrementamos el contador
    	cont += 1;
    }

    //Llamo a la función que calcula el máximo
    max = calculamaximo(numeros, tam);

    //Imprimo resultado
    printf("\n\nEl valor máximo de los datos que has introducido es: %d, y los números son: ", max);
   
   	//Imprimimos los números
   	for (i = 0;i < tam; i++)
		printf(" %d ",*(numeros + i));

	printf("\n\n");

    //Liberamos memoria
    free(numeros);

    //Fin del programa
    return 0;
}


int calculamaximo(int *nums, int tam){

	//Declaro las variables necesarias.
	int max, i;

	//Calculamos el valor máximo del vector de tam elementos 
	for(i = 0; i < tam; i++){
		if(* (nums + i) > max){
			max = * (nums + i);
		}
	}
	//Devuelvo el resultado
	return max;
}
