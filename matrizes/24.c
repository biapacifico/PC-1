#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior (int matriz [4][5]){
    int i, j, aux=matriz [0][0];

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            if (matriz [i][j] > aux){
                aux = matriz [i][j];
            }
        }
    }

    return aux;
}

int main (){
    int i, j, resultado;

    srand (time (NULL));

    int matriz [4][5];

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            matriz [i][j] = rand ()%26;
            printf ("%d ", matriz [i][j]);
        }
        printf ("\n");
    }

    resultado = maior (matriz);

    printf ("O maior valor da matriz é: %d\n", resultado);
}