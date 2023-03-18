#include <stdio.h>

void divisores (){
    int n=1, cont=0, div=0, num;

    while (n<=10000){
        for (int i=1; i<=n; i++){
            if (n%i==0){
                cont++;
            }
        }
        if (cont>div){
            div = cont;
            num = n;
        }
        cont=0;
        n++;
    }

    printf ("O número é %i e seu número de divisores é %i", num, div);
}

int main (){

    divisores ();
}