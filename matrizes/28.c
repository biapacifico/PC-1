#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void consumo_medio_mes (int consumos_mensais [8][12]){
    int soma=0;

    for (int i=0; i<8; i++){
        
    }
}


int main (){

    srand (time (NULL));

    int consumos_mensais [8][12];

    for (int i=0; i<8; i++){
        for (int j=0; j<12; j++){
            consumos_mensais [i][j] = rand ()%36;
            printf ("%d ", consumos_mensais [i][j]);
        }

        printf ("\n");
    }
}