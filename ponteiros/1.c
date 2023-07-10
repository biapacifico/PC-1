#include <stdio.h>

char* strchar (char *s, char ch){

    for (int i=0; s[i]!='\0'; i++){
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
    printf ("Digite o caracter procurado: ");
    scanf ("%c", &ch);
    //getchar ();

    char *p;
    p = strchar (s, ch);
    printf ("%p", p);
    printf ("\n%s", p);
}