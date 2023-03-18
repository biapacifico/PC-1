#include <stdio.h>

int main (){

	float soma=0, num=4, den=1, contador;
	int sinal=1;
	for (contador=(num/den); contador>0.0001;){
		soma = soma + (sinal * contador);
		den = den+2;
		contador = (num/den);
		sinal = sinal * (-1);
	}

	printf ("O valor de PI é: %f", soma);

}