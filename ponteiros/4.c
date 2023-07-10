#include <stdio.h>
#include <stdlib.h>

void calc (int *v, int num, int *xmin, int *xmax){
    int maior=v[0], menor=v[0];

    for (int i=0; i<num; i++){
        if (v[i] > maior){
            maior = v[i];
        }
    }

    for (int j=0; j<num; j++){
        if (v[j] < menor){
            menor = v[j];
        }
    }

    *xmin = menor;
    *xmax = maior;

    printf ("XMIN = %i\n", *xmin);
    printf ("XMAX = %i\n", *xmax);
}

int main (){
    int num, *xmin, *xmax;

    int v [15];
    for (int i=0; i<15; i++){
        v [i] = rand()%36;
        printf ("%i ", v [i]);
    }

    printf ("\nDigite a quantidade 'num' de primeiros números do vetor: ");
    scanf ("%i", &num);

    //printf ("%p", xmin);
    //printf ("\n%p", xmax);

    calc (v, num, &xmin, &xmax);
}