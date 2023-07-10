// imprime a mensagem secreta composta pelas primeiras letras de cada palavra

#include <stdio.h>

int espaco (char string[], int j){
    
    while (string[j]==' '){
        j++;
    }

    return j;
}

int contar (char string[]){
    int cont=0;
    
    for (int i=0; string[i]!='\0'; i++){
        cont++;
    }

    return cont;
}

int main (){
    int tam;

    char string [50];
    printf ("Digite sua mensagem: ");
    gets (string);
    tam = contar (string);

    int i=0;
    while (string[i]==' '){
        i++;
    }
    printf ("%c", string[i]);

    int e;
    for (int j=0; j<tam; j++){
        if (string[j]==' '){
            e = espaco (string, j);
            printf ("%c", string[e]);
            j = e;
        }
    }
}