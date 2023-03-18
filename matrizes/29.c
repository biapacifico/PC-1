#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 5

int main (){

    int menor_elemento [N], maior_elemento [N], aux=0, c=0;

    srand (time (NULL));

    int matriz [M][N];

    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            matriz [i][j] = rand ()%36;
            printf ("%d ", matriz [i][j]);
        }

        printf ("\n");
    }

    for (int l=0; l<M; l++){
        if (matriz [l][c] > aux){
            aux = matriz [l][c];
        }

        /*for (int v=0; v<N; v++){
            maior_elemento [v] = aux;
            printf ("%d", maior_elemento [v]);
        }*/
        
        if (l==M-1){
            c++;
        }
    }
}