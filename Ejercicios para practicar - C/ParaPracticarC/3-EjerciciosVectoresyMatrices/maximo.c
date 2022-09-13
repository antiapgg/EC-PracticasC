/****************************
 *  		MAXIMO			*
 ****************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 

#define TAM 10


//Declaro los prototipos de funciones
int calculamaximo(int vector[]);


//Función principal del programa
int main () {
	
	// Este programa calula el valor maximo de un vector de n enteros.

	// Declaro las variables de mi función
    int vector[TAM], maximo, i, num, max;

    for(i = 0; i < TAM; i++){

    	//Imprimo mensaje solicitando datos
    	printf("\n\tIntroduce un número en el vector: ");

    	//Leo el número que me proporciona el usuario, y los guardo en el vector
    	scanf("%d", &num);

    	vector[i] = num;
    }

    //Llamo a la función que calcula el máximo
    max = calculamaximo(vector);

    //Imprimo resultado
    printf("\n\nEl valor máximo de los datos que has introducido es: %d, y los números son: ", max);

    //Imprimimos los números
   	for (i = 0;i < TAM; i++)
		printf(" %d ", vector[i]);

	printf("\n\n");

	 //Fin del programa
    return 0;
}


  //////////////////////////////////
 //       CALCULA MAXIMO         //
//////////////////////////////////

int calculamaximo(int vector[]){

	//Declaro las variables necesarias.
	int max, i;

	//Calculamos el valor máximo del vector de tam elementos 
	for(i = 0; i < TAM; i++){
		if(vector[i] > max){
			max = vector[i];
		}
	}
	//Devuelvo el resultado
	return max;
}


