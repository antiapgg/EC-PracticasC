/*************************
 *   	 PITÁGORAS		 *
 *************************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería matemática
#include <math.h> 

//Declaro los prototipos de funciones
float pitagoras(int cateto1, int cateto2);

//Función principal del programa
int main () {
	
	// Este programa aplica el teoréma de pitágoras. Solicita por teclado al usuario el valor de los 2 catetos, y llama a la función pitagoras que:
	//		PITAGORAS: con los 2 catetos, calcula el valor de la hipotenusa y la devuelve.
	// La funcion principal MAIN imprime el resultado de la funcion.

	// Declaro las variables de mi función
    int cateto1, cateto2;
    float hipotenusa; 

    //Imprimo mensaje para solicitar el numero
	printf("\nEste programa calcula el valor de la hipotenusa a partir de los dos catetos que debes introducir.");
	
	do{
		printf("\n\tIntroduce el valor del primer cateto: ");
		//Leo el valor por teclado
		scanf("%d", &cateto1);
		printf("\tIntroduce el valor del segundo cateto: ");
		//Leo el valor por teclado
		scanf("%d", &cateto2);
		if(cateto1 <= 0 || cateto2 <= 0)
			printf("\nERROR, los catetos deben ser mayores que 0.");
	} while(cateto1 <= 0 && cateto2 <= 0);

	//Llamamos a la funcion
	hipotenusa = pitagoras(cateto1, cateto2);

	//Imprimimos el resultado: 
	printf("\n\nSegún el teorema de Pitágoras, dados dos catetos de valores %d y %d, su hipotenusa es igual a %f.\n\n", cateto1, cateto2, hipotenusa);

    //Fin del programa
    return 0;
}

  /////////////////////////
 //      PITÁGORAS      //
/////////////////////////

float pitagoras(int cateto1, int cateto2){

	//Declaración de variables: 
	float hipotenusa;

	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

	//Fin de la función.
	return hipotenusa;
}

