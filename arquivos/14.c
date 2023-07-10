#include <stdio.h>
#include <stdlib.h>

void mostrar (int *arquivo){
    
    arquivo = fopen ("vetor.bin", "rb");
    
    int i=0, aux;
    while (i<20){
        //fseek (arquivo, 20*sizeof(int), SEEK_SET);
        fread (&aux, sizeof(int), 1, arquivo);
        printf ("\n%i", aux);
        i++;
    }
}

int main (){

    int vetor [20];
    for (int i=0; i<20; i++){
        vetor [i] = rand()%56;
    }

    FILE *arquivo;
    arquivo = fopen ("vetor.bin", "wb");
    if (arquivo == NULL){
        printf ("Arquivo inexistente");
        return 1;
    }

    for (int i=0; i<20; i++){
        fwrite (&vetor[i], sizeof(int), 1, arquivo);
    }

    mostrar (arquivo);
}