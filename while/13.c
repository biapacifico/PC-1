#include <stdio.h>

int main (){
	float n, soma=0;
	printf ("Defina o valor de n: ");
	scanf ("%f", &n);
	
	for (int i=3; i<=n; i++){
		soma = soma + ((5*i)+2);
	}

	printf ("A soma é: %f", soma);

}