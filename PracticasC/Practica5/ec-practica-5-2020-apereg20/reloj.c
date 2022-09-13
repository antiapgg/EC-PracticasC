/****************************
 *  		RELOJ		 	*
 ****************************/	

//ENTRADAS:
//  segs: 	int ; Número leído 
//
//SALIDAS:
//VARIABLES:
//  segs: 	int 
//  mins: 	int 
//  horas: 	int 
//  dias: 	int
//
//INICIO 
//  printf “Escribe un número de segundos: ” 
//  scanf segs 
//  if segs < 0 then
//      ESCRIBA “Error. Debe indicar un número positivo”
//  else 
//      mins = 0
//      horas = 0
//      dias = 0
//      if segs > 59 then
//           mins = segs / 60 
//           segs = segs mod 60
//           if mins > 59 then 
//               horas = mins / 60
//               mins = mins mod 60
//               if horas > 23 then
//                    dias = horas / 24 
//                    horas = horas mod 24
//               endif
//           endif
//      endif
//      printf “El número de segundos se corresponde con “, Dias, “ días,”, Horas, “ horas,”, Mins “ minutos y ”, Segs, “ segundos.”
//  endif 
//end

//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
 int main(){

 	//Este programa lee una cantidad de segundos, introducidos por teclado
 	// por el usuario, y lo transforma en días, horas, minutos y segundos. 

 	//Declaración de Variables
 	int segs, mins, horas, dias;

 	//Imprimo con printf un mensaje para que el usuario escriba el número de segundos 
 	printf("\nEscribe el número de segundos a convertir: ");

 	//Leo con scanf el número introducido por el usuario
 	scanf("%d", &segs);	//Guardo el número leído en la variable

 	//Si el número introducido es 0 o negativo, imprime mensaje de error
 	if (segs <= 0){
 		printf("\nError, introduzca un número de segundos positivo.\n");
 	}
 	else{
 		//Inicializamos las variables
 		mins = 0;
 		horas = 0;
 		dias = 0;

 		//Si hay mas de 59 segundos, calculamos los minutos
 		if (segs > 59){	
 			mins = segs / 60;	//Calculamos los minutos
 			segs = segs % 60; 	//Guardamos los segundos restantes

 			//Si hay mas de 59 minutos, calculamos las horas
 			if (mins > 59){
 				horas = mins / 60;	//Calculamos las horas
 				mins = mins % 60;	//Calculamos los minutos restantes

 				//Si hay mas de 23 horas, calculamos los dias
 				if (horas > 23){
 					dias = horas / 24;	//Calculamos los dias
 					horas = horas % 24;	//Calculamos las horas restantes
 				}
 			}
 		}
 		//Imprimimos el resultado
 		printf("\nEl número de segundos introducidos se corresponde con: %d días, %d horas, %d minutos y %d segundos.\n\n", dias, horas, mins, segs);
 	}

 	//Fin del programa
 	return 0;
} 	
