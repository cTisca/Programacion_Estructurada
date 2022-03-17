#include <stdio.h>

int main(){

    int n,r=1;
    printf("Multiplicatoria de todos los núeros hasta que se escriba un 0:\n");
    do
    {
        printf("Ingrese un número: ");
        scanf("%d",&n);
        if (n!=0) r=r*n;
    } while (n!=0);
    printf("La multiplicatoria fue de: %d",r);

    return 0;
}