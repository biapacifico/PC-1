#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pares (int matriz [4][5]){
    int i, j, cont=0;

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            if ((matriz [i][j])%2==0){
                cont++;
            }
        }
    }

    return cont;
}

int main (){
    int i, j, resultado;

    srand (time (NULL));

    int matriz [4][5];

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            matriz [i][j] = rand ()%16;
            printf ("%d ", matriz [i][j]);
        }
        printf ("\n");
    }

    resultado = pares (matriz);

    printf ("A quantidade de pares é: %d", resultado);
}