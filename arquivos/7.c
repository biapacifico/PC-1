#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[]){

    FILE *arquivo1;
    FILE *arquivo2;
    char nome_arquivo1 [40];
    char nome_arquivo2 [40];

    printf ("Digite o primeiro arquivo: ");
    gets (nome_arquivo1);
    printf ("Digite o segundo arquivo: ");
    gets (nome_arquivo2);

    arquivo1 = fopen (nome_arquivo1, "rb");
    arquivo2 = fopen (nome_arquivo2, "rb");

    fseek (arquivo1, 0, SEEK_END);
    //printf ("%d", ftell (arquivo1));
    fseek (arquivo2, 0, SEEK_END);
    //printf ("\n%d", ftell (arquivo2));

    if (ftell (arquivo1) > ftell (arquivo2)){
        printf ("Arquivo 1 possui mais bytes");
    }
    printf ("Arquivo 2 possui mais bytes");
}