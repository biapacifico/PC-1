#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *arquivo;
    arquivo = fopen ("notas.txt", "r");

    if (arquivo == NULL){
        printf ("Impossível abrir o arquivo");
        return 1;
    }

    int notas [6];
    int num, i=0;
    while (fscanf (arquivo, "%i", &num) != EOF){
        notas [i] = num;
        i++;
    }

    for (int i=0; i<6; i++){
        printf ("%i ", notas [i]);
    }
    
    int maior = notas[0], menor = notas[0];
    for (int i=0; i<6; i++){
        if (notas [i] > maior){
            maior = notas [i];
        }
        if (notas [i] < menor){
            menor = notas [i];
        }
    }
    printf ("\nA menor nota foi: %i", menor);
    printf ("\nA maior nota foi: %i", maior);

    int apr=0, rep=0;
    for (int i=0; i<6; i++){
        if (notas [i] >= 60){
            apr++;
        }
        if (notas [i] < 60){
            rep++;
        }
    }
    printf ("\nO número de aprovados foi: %i", apr);
    printf ("\nO número de reprovados foi: %i", rep);

    fclose (arquivo);
}