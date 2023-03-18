#include <stdio.h>

int main (){

    int n, m, soma=0;
    
    do{
        printf ("Digite o primeiro valor: ");
        scanf ("%i", &n);
        printf ("Digite o segundo valor: ");
        scanf ("%i", &m);

        if (n>m && n!=0 && m!=0){
            for (int i=m; i<=n; i++){
                printf ("%i ", i);
                soma = soma + i;
            }
            printf ("Soma: %i\n", soma);
        }

        if (m>n && n!=0 && m!=0){
            for (int i=n; i<=m; i++){
                printf ("%i ", i);
                soma = soma + i;
            }
            printf ("Soma: %i\n", soma);
        }

        if (n==0 || m==0){
            printf ("O programa terminou");
        }

    } while (n!=0 && m!=0);

}