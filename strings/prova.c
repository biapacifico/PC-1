#include <stdio.h>
#include <string.h>
#include <ctype.h>

void palindromo (char string[], int tam){
    
    int cont=0;

    for (int i=0, j=(tam-1); i<tam, j>=0; i++, j--){
        if (string[i] == string[j]){
            cont++;
        }
    }

    if (cont==tam){
        printf ("\nPalíndromo");
    }
    else {
        printf ("\nNão é palíndromo\n");
    }
}

void copia_sem_espacos (char string[]){

    int tam = strlen (string);

    for (int i=0; i<tam; i++){
        string[i] = tolower (string[i]);
    }

    int s1=0;
    for (int i=0; i<tam; i++) {
        if (string[i]==' '){
            continue;
        }
        else {
            string[s1] = string[i];
            s1++;
        }
    }
    string [s1] = '\0';

    tam = strlen (string);
    
    palindromo (string, tam);
}

int main (){

    char string[50];
    printf ("Digite a string: ");
    gets (string);
    
    copia_sem_espacos (string);
}