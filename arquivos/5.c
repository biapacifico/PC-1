#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[]){

    FILE *arquivo;
    char nome_arquivo [40];

    printf ("Digite o nome do arquivo: ");
    gets (nome_arquivo);

    arquivo = fopen (nome_arquivo, "rb");

    int k;
    fseek (arquivo, 0, SEEK_END);
    printf ("%d", ftell (arquivo));

    fclose (arquivo);
}