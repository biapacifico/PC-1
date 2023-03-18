#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int i, j;

    srand (time (NULL));

    int matriz [4][5];

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            matriz [i][j] = rand()%26;
            printf ("%d  ", matriz [i][j]);
        }
        printf ("\n");
    }
}