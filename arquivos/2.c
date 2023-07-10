#include <stdio.h>

int main (int argc, char* argv[]){
    int cont=0;
    
    FILE *arquivo;
    char ch;

    arquivo = fopen ("arquivo1.txt", "r");

    do {
        ch = fgetc (arquivo);
        if (ch == 'a'){
            cont++;
        }
    } while (ch != EOF);

    fclose (arquivo);

    printf ("Quantidade de caracteres a: %i\n", cont);
}