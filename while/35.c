#include <stdio.h>

int main (){
    int x, y, cont=0;

    printf ("Digite o valor de X: ");
    scanf ("%i", &x);
    printf ("Digite o valor de Y: ");
    scanf ("%i", &y);
    
    for (int i=1; i<=y; i++){
        printf ("%i ", i);
        cont++;
        if (cont==x){
            printf ("\n");
            cont=0;
        }
    }
}