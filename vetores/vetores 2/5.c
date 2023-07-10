#include <stdio.h>

int contar (char string[]){
    int cont=0;

    for (int i=0; string[i]!='\0'; i++){
        cont++;
    }

    return cont;
}

int main (){
    int tam, cont=0;
    
    char string [50];
    printf ("Digite sua frase: ");
    gets (string);
    tam = contar (string);

    char ch;
    ch = string [0];
    for (int i=0; i<tam; i++){
        if (string[i]==' '){
            if (string[i+1]==ch){
                //cont++;
                printf ("%c", string[i+1]);
                //printf ("%i", cont);
            }
            else {
                ch = string [i+1];
                i++;
            }
        }
    }
}