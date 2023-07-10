#include <stdio.h>

int main (int argc, char* argv[]){

    FILE *arquivo;

    char string [50];
    printf ("Digite sua string: ");
    gets (string);

    arquivo = fopen ("arquivo.bin", "wb");

    int cont=0;
    for (int i=0; string[i]!='\0'; i++){
        cont++;
    }

    fwrite (string, sizeof(char), cont, arquivo);

    fclose (arquivo);
} 