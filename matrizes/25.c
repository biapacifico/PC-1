// mostrar o segundo maior valor de uma matriz

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tirar (int matriz [4][5], int aux){

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            if (matriz [i][j] == aux){
                matriz [i][j] = 0;
            }
        }
    }
}

int segundo_maior (int matriz [4][5]){
    int aux=matriz [0][0], i, j;

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
    int i, j;

    srand (time (NULL));

    int matriz [4][5];

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            matriz [i][j] = rand ()%16;
            printf ("%d ", matriz [i][j]);
        }
        printf ("\n");
    }

    tirar (matriz, segundo_maior (matriz));
    printf ("O segundo maior valor é: %d\n", segundo_maior (matriz));
}