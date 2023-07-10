#include <stdio.h>

int numCaracter (char num[]){

    int qnt=0;
    for (int i=0; num[i]!='\0'; i++){
        qnt++;
    }

    return qnt;
}

int main (){

    int numTestes, cont=0;
    char numDigitado [1000], numEncaixa [1000];

    printf ("Digite a quantidade de testes: ");
    scanf ("%i", &numTestes);

    for (int i=0; i<numTestes; i++){
        printf ("Digite um número inteiro: ");
        scanf ("%s", &numDigitado);
        printf ("Digite o número para teste: ");
        scanf ("%s", &numEncaixa);

        if (numCaracter(numDigitado) < numCaracter(numEncaixa)){
            printf ("Não encaixa\n");
        }
        else {
            for (int i=numCaracter(numDigitado); i>(numCaracter(numDigitado)-numCaracter(numEncaixa)); i--){
                for (int j=numCaracter(numEncaixa); j>=0; j--){
                    if (numDigitado[i]==numEncaixa[j]){
                        cont++;
                    }
                }
            }
            if (cont==numCaracter(numEncaixa)){
                printf ("Encaixa\n");
            }
            else {
                printf ("Não encaixa");
            }
            cont=0;
        }
    }
}