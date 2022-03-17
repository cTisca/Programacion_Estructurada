#include <stdio.h>

int main(){
    //Declaración de variables
    int n;

    do 
    {
        //Lectura del dato (Número de veces a repetir)
        printf("Ingrese un número entre 1 y 5: ");
        scanf("%d",&n); 

        //Validación de que el valor ingresado esté dentro del rango
        //Si se sale del rango (verdadero), muestra mensaje de error
        if (n>5 || n<1) printf("'tas mal, debe ser entre 1 y 5\n");
        else printf("Número dentro del rango.");
    } while (n<1 || n>5);
    
    return 0;
}