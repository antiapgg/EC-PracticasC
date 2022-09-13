/*********************
 *   	 OHM		 *
 *********************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 

//Declaro los prototipos de funciones
float ley_de_ohm (char incognita);

//Función principal del programa
int main () {
	
	// Este programa implementa la ley de Ohm ( V = R * I )
	//		POTENCIA: recibe 2 numeros enteros (base y exponente), y calcula la base elevada al exponente sin usar pow, y devuelve el resultado
	// La funcion principal MAIN imprime el resultado o un mensaje de error.

	// Declaro las variables de mi función
    int incognita = 0;
    float resultado;
    char inco;

    //Imprimo mensaje para solicitar el numero
	printf("\nEste programa implementa la ley de Ohm que dice: \tV = R * I\n");
	printf("\nDebe seleccionar un valor como incógnita: ");
	printf("\n\t1. V.");
	printf("\n\t2. R.");
	printf("\n\t3. I.");
	//Solicito los datos
	printf("\n¿Cuál va a ser su incógnita?  ");
	//Leo el valor por teclado
	scanf("%d", &incognita);

	if(incognita > 3 || incognita < 1)
		printf("\nERROR, el valor debe ser uno de los indicados en el menú.");

	if (incognita == 1)
		inco = 'V';
	else if (incognita == 2)
		inco = 'R';
	else if (incognita == 3)
		inco = 'I';

	//Llamamos a la funcion
	resultado = ley_de_ohm(inco);

	//Imprimimos el resultado
	printf("\nEl resultado de calcular la ley de Ohm con la incognita %c es: %f.\n\n", inco, resultado);

	//Fin del programa
	return 0;
}


  /////////////////////////
 //     LEY DE OHM      //
/////////////////////////

float ley_de_ohm (char incognita){

	//Declaración de variables
	float V, R, I, res;

	printf("\n\nVamos a introducir el resto de valores:	");
	if(incognita == 'V'){
		//Solicito los datos
		printf("\n\n\tIntroduce el valor de R: ");
		//Leo el valor por teclado
		scanf("%f", &R);
		//Solicito los datos
		printf("\tIntroduce el valor de I: ");
		//Leo el valor por teclado
		scanf("%f", &I);

		res = R * I;

		printf("\nV = R * I => V = %f * %f", R, I);
	}
	else if(incognita == 'R'){
		//Solicito los datos
		printf("\n\n\tIntroduce el valor de V: ");
		//Leo el valor por teclado
		scanf("%f", &V);
		//Solicito los datos
		printf("\tIntroduce el valor de I: ");
		//Leo el valor por teclado
		scanf("%f", &I);

		res = V / I;

		printf("\nR = V / I => R = %f / %f", V, I);
	}
	else if(incognita == 'I'){
		//Solicito los datos
		printf("\n\n\tIntroduce el valor de V: ");
		//Leo el valor por teclado
		scanf("%f", &V);
		//Solicito los datos
		printf("\tIntroduce el valor de R: ");
		//Leo el valor por teclado
		scanf("%f", &R);

		res = V / R;

		printf("\nI = V / R => I = %f / %f", V, R);
	}

	printf("\n");

	//Fin de la función
	return res;
}