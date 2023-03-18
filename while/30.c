#include <stdio.h>

int main (){
    int n, num, cont1=0, cont2=0;

    printf ("Digite o valor de N: ");
    scanf ("%i", &n);

    for (int i=0; i<n; i++){
        printf ("Digite um número: ");
        scanf ("%i", &num);
        if (num>=10 && num<=20){
            cont1++;
        }
        else {
            cont2++;
        }
    }

    printf ("%i números dentro do intervalor e %i números fora do intervalo", cont1, cont2);
}