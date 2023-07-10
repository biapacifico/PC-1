#include <stdio.h>

int main (int argc, char*argv[]){

    FILE *arquivo;

    arquivo = fopen ("arquivo.bin", "rb");

    char string [100];

    for (int i=0; i<100; i++){
        fread (&string[i], sizeof(char), 1, arquivo);
    }

    int cont=0;
    for (int i=0; string[i]!='\0'; i++){
        if (string[i] == 'a'){
            cont++;
        }
    }

    printf ("A quantidade de a é: %i", cont);

    //printf ("%s", string);
}