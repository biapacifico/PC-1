#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *arquivo;
    arquivo = fopen ("ci.txt", "r");

    if (arquivo == NULL){
        printf ("Arquivo inexistente");
        return 1;
    }

    
}