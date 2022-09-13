/********************************
 *  		IDENTIDAD			*
 ********************************/	


//Librería que contiene las funciones scanf y printf
#include <stdio.h> 

//Declaro las constantes
#define DIM 9

//Declaro los prototipos de funciones
void identidad(int m[DIM][DIM]);

//Función principal del programa
int main () {
	
	// Este programa inicializa e imprime la matriz identidad 9x9
	
	// Declaro las variables de mi función
    int matriz[DIM][DIM],i,j;
	
    identidad(matriz);
    
    printf("\n\t\tLa matriz identidad es \n\n");
    for (i=0;i<DIM;i++){
        for(j=0;j<DIM;j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
   
//Fin del programa

return 0;

}

void identidad(int m[DIM][DIM])
{
    int i,j;
    for (i=0;i<DIM;i++)
        for(j=0;j<DIM;j++)
            if(i==j)
                m[i][j]=1;
            else
                m[i][j]=0;

	return;
}
