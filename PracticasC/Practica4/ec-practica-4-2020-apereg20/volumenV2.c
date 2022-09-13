/********************************
 *  		VOLUMEN V2		 	*
 ********************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h>
#include <math.h>

float calculaVolumenCono(int radio, int altura);
float calculaVolumenOrtoedro(int lado1, int lado2, int altura);

//Función principal del programa
 int main(){

 	// Este programa muestra un menú con las opciones que se pueden realizar:
 	// 		1. Calcular Volumen Cono
 	// 		2. Calcular Volumen Ortoedro
 	// Después de saber que opción se escoge, se solicita al usuario los datos para 
 	//  realizar los cálculos, y se imprime el resultado

 	//Declaración de Variables
 	int opcion, radio, altura, lado1, lado2;
 	float resultado;

 	do{


		//Imprimo con printf un mensaje para el usuario
 		printf("\nEste programa puede:");
 		printf("\n\t1. Calcular el Volumen de un Cono.");
 		printf("\n\t2. Calcular el Volumen del Octoedro.");
 		printf("\n\t3. Salir.");
 		printf("\nSeleccione la opción que prefiera: ");
 		//Leo con scanf el número introducido por el usuario
 		scanf("%d", &opcion);	//Guardo el número leído en la variable

	 	switch(opcion){
	 		case 1:
	 			printf("\n\nHas seleccionado la opción de Calcular el Voluman del Cono.");
		 		printf("\n\tIntroduce el radio del cono: ");
		 		scanf("%d", &radio);
		 		printf("\tIntroduce la altura del cono: ");
		 		scanf("%d", &altura);
		 		resultado = calculaVolumenCono(radio, altura);
		 		printf("\nEl Volumen es: %f\n", resultado);
		 		break;

		 	case 2: 
			 	printf("\n\nHas seleccionado la opción de Calcular el Voluman del Ortoedro.");
		 		printf("\n\tIntroduce la medida del lado 1: ");
		 		scanf("%d", &lado1);
		 		printf("\tIntroduce la medida del lado 2: ");
		 		scanf("%d", &lado2);
		 		printf("\tIntroduce la altura del Ortoedro: ");
		 		scanf("%d", &altura);
		 		resultado = calculaVolumenOrtoedro(lado1, lado2, altura);
		 		printf("\nEl Volumen es: %f\n", resultado);
		 		break;

		 	case 3:
		 		printf("\n\nHas seleccionado la opción de Salir.");
		 		printf("\t¡Hasta la próxima!");
		 		break;

		 	default:
		 		printf("\nError, opción no válida.\n");
		 		break;
		 }

	}while(opcion != 3);

 	return 0;
}

float calculaVolumenCono(int radio, int altura){

	float vol;
	
	vol = 1;
	vol = vol * M_PI * radio * radio * altura;
	vol = vol/3;

	return vol;
}

float calculaVolumenOrtoedro(int lado1, int lado2, int altura){

	float vol;

	vol = lado1 * lado2 * altura;
	
	return vol;
}
