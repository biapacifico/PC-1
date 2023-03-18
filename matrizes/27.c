#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrar (int matriz [4][5]){

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            printf ("%d ", matriz [i][j]);
        }

        printf ("\n");
    }
}

int existe (int matriz [4][5], int teste){

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            if (matriz [i][j]==teste){
                return 0;
            }
        }
    }

    return 1;
}

void repetidos (int matriz [4][5]){
    int teste;

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            if (matriz [i][j] == matriz [i][j-1]){
                teste = rand()%46;
                while (existe (matriz, teste)){
                    teste = rand()%46;
                }
                matriz [i][j] = teste;
            }
        }
    }

    printf ("\n");
    mostrar (matriz);
}

void ordenar (int matriz [4][5]){
    int aux;

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            for (int l=0; l<4; l++){
                for (int c=0; c<5; c++){
                    if (matriz [i][j] < matriz [l][c]){
                        aux = matriz [i][j];
                        matriz [i][j] = matriz [l][c];
                        matriz [l][c] = aux;
                    }
                }
            }
        }
    }

    printf ("\n");
    printf ("A matriz ordenada é: \n");
    for (int l=0; l<4; l++){
        for (int c=0; c<5; c++){
            printf ("%d ", matriz [l][c]);
        }
        printf ("\n");
    }

    repetidos (matriz);
}

int main (){
    int i, j;

    srand (time (NULL));

    int matriz [4][5];

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            matriz [i][j] = rand ()%46;
            printf ("%d ", matriz [i][j]);
        }

        printf ("\n");
    }

    ordenar (matriz);
}