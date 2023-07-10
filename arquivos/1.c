#include <stdio.h>

int main (int argc, char* argv[]){
    int cont=0;

    FILE *arquivo;

    char string [50];
    printf ("Digite sua string: ");
    gets (string);

    arquivo = fopen ("arquivo1.txt", "w");

    for (int i=0; string[i]!=0; i++){
        cont++;
    }

    for (int i=0; i<cont; i++){
        fprintf (arquivo, "%c", string[i]);
    }

    fclose (arquivo);
}