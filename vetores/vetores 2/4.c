#include <stdio.h>

void eliminaEspaco (char string[]){

    for (int i=0; string[i]!='/0'; i++){
        if (string[i]==' '){
            for (int j=i; string[j]!='/0'; j++){
                string [j] = string [j+1];
            }
        }
    }

    printf ("%s", string);
}

int main (){

    char string [200];
    printf ("Digite a sua string: ");
    gets (string);

    eliminaEspaco (string);
}