#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int vetor [15], par [5], impar [5];

    srand (time (NULL));

    for (int i=0; i<15; i++){
        vetor [i] = rand ()%56;
        printf ("[%i] = %i\n", i, vetor[i]);
    }
    
    int p=0, ip=0;
    for (int i=0; i<15; i++){
        if (vetor[i]%2==0){
            par [p] = vetor [i];
            printf ("par [%i] = %i\n", p, par[p]);
            p++;
            if (p==5){
                p=0;
            }
        }
        else {
            impar [ip] = vetor [i];
            printf ("ímpar [%i] = %i\n", ip, impar[ip]);
            ip++;
            if (ip==5){
                ip=0;
            }
        }
    }
}