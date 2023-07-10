#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *arquivo;
    char nome_arquivo [20];
    char palavra [20];

    printf ("Digite o nome do arquivo: ");
    gets (nome_arquivo);

    printf ("Digite a palavra: ");
    gets (palavra);

    arquivo = fopen (nome_arquivo, "r");

    
}