#include <stdio.h>
#include <stdlib.h>

int main (){

    int n, soma=0;
    printf ("Digite um número: ");
    scanf ("%i", &n);

    for (int i=1; i<n; i++){
        if (n%i==0){
            soma = soma + i;
        }
    }

    if (soma==n){
        printf ("É um número perfeito");
    }
    printf ("Não é um número perfeito");
}