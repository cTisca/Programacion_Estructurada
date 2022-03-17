#include <stdio.h>

int main(){

    int numS= 73, numU,i=0;

    do
    {
        printf("Adivina el  número entre 1 y 100: ");
        scanf("%d",&numU);
        i++;
        if (numU>100 || numU<1) printf("Numero fuera de rango.\n");
        else    if (numU>numS) printf("Número mayor.\n");
                else    if(numU!=numS) printf("Número menor.\n");
        
    } while (numU!=numS);
    printf("Bien hecho, adivinaste en %d intentos,",i);

    return 0;
}