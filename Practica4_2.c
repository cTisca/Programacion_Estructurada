#include <stdio.h>

int main(){
    //Declaración de variables
    int i,a,e;

    for (i=0;i<7;i++)
    {
        for (e=0; e<=i;e++)
        {
            printf(" ");
        }

        for (a=6; a>=i;a--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}