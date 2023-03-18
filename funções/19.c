#include <stdio.h>

int digitos (int m){

    while (m>0){

        if (m%10<=2){
            m = m/10;
        } 
        else {
            return 0;
        }
    }
    return 1;
}

int multiplos (int n){
    int i=1, m; 

    do { 
        m = n*i;
        i++;

    } while (digitos (m) != 1);

    return m;
}

int main (){
    int n=1, soma=0;

    while (n<=100){
        soma = soma + (multiplos (n))/n;
        n++;
    }

    printf ("O somatório é: %i", soma);
}