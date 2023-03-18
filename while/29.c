#include <stdio.h>

int main (){
    int n, num, aux, aux2, maior;

    printf ("Digite o valor de N: ");
    scanf ("%i", &n);

    for (int i=1; i<=n; i++){
        aux = num;
        printf ("Digite o %i° valor: ", i);
        scanf ("%i", &num);
        if (num > aux){
            maior = num;
            aux2 = i;
        }
    }

    printf ("O maior número é %i na posição %i\n", maior, aux2);
}