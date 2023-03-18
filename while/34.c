#include <stdio.h>

int main (){
    int num, cont=0, m=1, aux, aux2, num2=0;

    printf ("Digite um número: ");
    scanf ("%i", &num);

    while (num%10!=0){
        num = num/10;
        cont++;
    }
    //printf ("%i\n", cont);

    for (int i=0; i<(cont-1); i++){
        m = m*10;
    }
    //printf ("%i", m);

    while (num%10!=0){
        aux = num%10;
        printf("aux %i",aux);
        num2 = num2 + (aux*m);
        num = num/10;
        m = m/10;
    }
    printf ("%i", num2);
}