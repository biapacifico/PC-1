#include <stdio.h>

int main (){
    int a, n, soma=0;

    printf ("Digite o valor inicial 'A': ");
    scanf ("%i", &a);

    do{
        
        printf ("Digite o valor de 'N': ");
        scanf ("%i", &n);
        
        if (n<=0){
            printf ("O programa terminou.\n");
        }

        else {
            for (int i=a; i<a+n; i++){
                soma = soma + i;
                printf ("%i ", i);
            }
            printf ("\nA soma é: %i\n", soma);
        
            soma = 0;
        }

    } while (n>0);
}