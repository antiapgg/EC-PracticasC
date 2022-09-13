/*********************************
 *   	 DISTANCIA EUCLÍDEA		 *
 *********************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería matemática
#include <math.h> 

//Declaro los prototipos de funciones
float distancia(int x1, int y1, int z1, int x2, int y2, int z2);

//Función principal del programa
int main () {
	
	// Este programa calcula la distancia euclidea entre unas coordenadas introducidas por el usuario.
	// La funcion principal MAIN solicita al usuario 6 numeros, que se corresponderan con las coordenadas de 2 puntos en el espacio (x1, y1, z1), (x2, y2, z2)
	//		Llamará a la función distancia que:
	//			DISTANCIA: calcula y devuelve la distancia euclídea entre esos puntos (recibidos como argumento)
	// La funcion principal MAIN imprime el resultado de la funcion.

	// Declaro las variables de mi función
    int x1, y1, z1, x2, y2, z2;
    float distanciaEuclidea; 

    //Imprimo mensaje para solicitar el numero
	printf("\nEste programa calcula la distancia euclídea entre 2 puntos introducidos por teclado.");
	
	//Solicito los datos
	printf("\n\tIntroduce el valor de la coordenada x1: ");
	//Leo el valor por teclado
	scanf("%d", &x1);
	//Solicito los datos
	printf("\tIntroduce el valor de la coordenada y1: ");
	//Leo el valor por teclado
	scanf("%d", &y1);
	//Solicito los datos
	printf("\tIntroduce el valor de la coordenada z1: ");
	//Leo el valor por teclado
	scanf("%d", &z1);
	//Solicito los datos
	printf("\tIntroduce el valor de la coordenada x2: ");
	//Leo el valor por teclado
	scanf("%d", &x2);
	//Solicito los datos
	printf("\tIntroduce el valor de la coordenada y2: ");
	//Leo el valor por teclado
	scanf("%d", &y2);
	//Solicito los datos
	printf("\tIntroduce el valor de la coordenada z2: ");
	//Leo el valor por teclado
	scanf("%d", &z2);

	//Llamamos a la funcion
	distanciaEuclidea = distancia(x1, y1, z1, x2, y2, z2);

	//Imprimimos el resultado: 
	printf("\n\nLa distancia euclídea de las coordenadas (%d, %d, %d) y (%d, %d, %d), es: %f.\n\n", x1, y1, z1, x2, y2, z2, distanciaEuclidea);

    //Fin del programa
    return 0;
}

  /////////////////////////
 //      DISTANCIA      //
/////////////////////////

float distancia(int x1, int y1, int z1, int x2, int y2, int z2){

	//Declaración de variables: 
	float distanciaEuclidea;

	distanciaEuclidea = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));

	//Fin de la función.
	return distanciaEuclidea;
}