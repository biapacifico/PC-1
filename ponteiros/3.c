#include <stdio.h>

char* strstr (char *str1, char *str2){
    int cont1=0, cont2=0, j;

    for (int t=0; str1[t]!='\0'; t++){
        cont1++;
    }

    for (int t=0; str2[t]!='\0'; t++){
        cont2++;
    }

    if (cont2>cont1){
        return NULL;
    }

    for (int i=0; i<cont1; i++){
        for (j=0; str1[i+j] == str2[j]; j++){
        }
        if (j == cont2){
            return &str1[i];
        }
    }

    return NULL;
}

int main (){

    char str1 [20];
    printf ("Digite sua primeira string: ");
    gets (str1);

    char str2 [20];
    printf ("Digite sua segunda string: ");
    gets (str2);

    char *p;
    p = &str1 [0];
    printf ("%p", p);

    char *res;
    res = strstr (str1, str2);
    printf ("\n%p", res);
    //printf ("\n%s", res);
}