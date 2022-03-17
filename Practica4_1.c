#include <stdio.h>

int main(){
    //Declaración de variables
    int n,i,r;

    do 
    {
        //Lectura del dato (Número de veces a repetir)
        printf("Ingrese un número entre 1 y 10: ");
        scanf("%d",&n); 

        //Validación de que el valor ingresado esté dentro del rango
        //Si se sale del rango (verdadero), muestra mensaje de error
        if (n>10 || n<1) printf("'tas mal, debe ser entre 1 y 10\n"); 
        else {
            //Impresión de la función a trabajar
            printf("Calculando f(x)=x^3 - 4x^2 + 25\n"); 
            for (i=0;i<=n;i++) {
                printf("%d\n",i);
                r= (i*i*i) - (4*i^2) + 25; //Cálculo de la función para cada valor de i
                //Impresión de los resultados
                printf("%d*%d*%d - 4*%d*%d + 25 = %d\n",i, i, i, i, i, r);
            }
        }      
    } while (n<1 || n>10);
    
    return 0;
}