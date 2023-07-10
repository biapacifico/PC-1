#include <stdio.h>

char* strchar (char *s, char ch){
    int cont=0;

    for (int t=0; s[t]!='\0'; t++){
        cont++;
    }

    for (int i=cont-1; i>=0; i--){
        if (s[i] == ch){
            return &s[i];
        }
    }

    return NULL;
}

int main (){

    char s [20];
    printf ("Digite sua string: ");
    gets (s);

    char ch;
    printf ("Digite o caracter desejado: ");
    scanf ("%c", &ch);

    char *p;
    p = strchar (s, ch);
    printf ("%p", p);
    printf ("\n%s", p);
}