#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *createArray (int *totVetor){

    srand (time(NULL));

    int *vetor, tamVetor, res, aumVetor;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%i", &tamVetor);
    vetor = (int*) malloc (tamVetor*sizeof(int));
    for (int i=0; i<tamVetor; i++){
        *(vetor+i) = rand()%56;
        printf ("%i ", *(vetor+i));
    }

    do {
        printf ("\nDeseja aumentar o tamanho do vetor? Digite 1 para SIM e 0 para NÃO: ");
        scanf ("%i", &res);
        if (res==1){
            printf ("Digite a quantidade de elementos: ");
            scanf ("%i", &aumVetor);
            *totVetor = tamVetor+aumVetor;
            vetor = (int*) realloc (vetor, *totVetor*sizeof(int));
            for (int i=tamVetor; i<*totVetor; i++){
                *(vetor+i) = rand()%56;
            }
            tamVetor = *totVetor;
        }
        else
        break;
    } while (res==1);

    return vetor;
}

int main (){

    int totVetor=0, *vetor;

    vetor = createArray (&totVetor);

    for (int i=0; i<totVetor; i++){
        printf ("%i ", *(vetor+i));
    }
}