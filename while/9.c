#include <stdio.h>

int main (){
	float e, contador, soma;
	printf ("Digite o valor de E: ");
	scanf ("%f", &e);
	
	for (contador=1; contador<e; contador+1/2){
		soma = soma + contador;
	}

	printf ("O valor de S é: %.3f\n", soma);
}
