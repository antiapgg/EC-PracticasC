/*********************
 *       INFO		 *
 *********************/	

//Librería que contiene las funciones scanf y printf
#include <stdio.h> 
//Librería para usar la función malloc para crear punteros, y números aleatorios
#include <stdlib.h>
//Librería para usar diversas funciones con cadenas
#include <string.h>


//Declaración de funciones
void leer_archivo(char m[MAX_ALUMNOS][MAX_CHAR]);
void busca_nombre(char m[MAX_ALUMNOS][MAX_CHAR], char letra);
void imprime(char m[MAX_ALUMNOS][MAX_CHAR]);

//Función principal del programa
int main(){

	//Declaración de variables
	FILE *parchivo;
	char alumnos[MAX_ALUMNOS][MAX_CHAR];
	char inicial;
	
	//Llamo a la función leer_archivo
    leer_archivo(alumnos);
    
    //Imprimo mensaje
    printf("\nEste programa lee la información de un archivo, y usando la inicial que usted introducirá, mostrará por pantalla el nombre y los apellidos del alumno con esa inicial.");
    
    //Imprimo mensaje para solicitar la inicial de la persona a la que desea buscar
    printf("\n\tIntroduzca la inicial de la persona a buscar: ");

    //Leo la inicial introducida
    scanf("%c", &inicial);

    //Busco el alumno con la función busca_nombre y la inicial dada
    busca_nombre(alumnos, inicial);
    
    //Imprimo mensaje
    printf("\n\nLos alumnos con dicha inicial son:\n");
    //Llamo a la función para imprimir archivo
    imprime(alumnos);
    printf("\n\n");

    //Fin del programa
	return 0;
}


  /////////////////////////////
 //      LEER ARCHIVO       //
/////////////////////////////

void leer_archivo(char m[MAX_ALUMNOS][MAX_CHAR]){

	//Declaración de variables
    FILE *parchivo;
    size_t n = 0;
    ssize_t bytesleidos;
    int i = 0;
    char *linea = NULL;

    //Abrimos el archivo, si no, error
    if ((parchivo = fopen("info.txt","r")) == NULL){
        printf("Error al abrir el fichero");
        exit(EXIT_FAILURE);
    }
    
    do{
        bytesleidos = getline(&linea, &n, parchivo);

        if (bytesleidos != -1){
            strncpy(m[i], linea, bytesleidos - 1);
            m[i][bytesleidos - 1] = 0;
            i++;
        }
    }
    while(bytesleidos != -1);

    //Liberamos memoria
    free(linea);

    //Cerramos archivo
    fclose(parchivo);

    //Fin de la función
    return;
    
}


  /////////////////////////////
 //      BUSCA NOMBRE       //
/////////////////////////////

void busca_nombre(char m[MAX_ALUMNOS][MAX_CHAR], char letra){

	//Declaración de variables
    int i;

    for (i = 0; i < MAX_ALUMNOS; i++) {

        if (m[i][0] == letra){
            printf("%s\n", m[i]);
        }
    }

    //Fin de la función
    return;
}


  /////////////////////////////
 //         IMPRIME         //
/////////////////////////////

void imprime(char m[MAX_ALUMNOS][MAX_CHAR]){

	//Declaración de variables
    int i;

    for (i = 0; i < MAX_ALUMNOS; i++)
        printf("%s\n", m[i]);

    //Fin de la función
    return;
}

