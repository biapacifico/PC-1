#include <stdio.h>

int main (){
	int n1, n2, soma, impar;
	
	printf ("Digite o primeiro número: ");
	scanf ("%i", &n1);
	printf ("Digite o segundo número: ");
	scanf ("%i", &n2);
	
	if (n1>n2)
		printf ("Digite outros valores\n");	
	
	else {
		for (impar=n1; impar<=n2; impar++){
		if (impar%2!=0){
			soma = soma + impar;
			}
		}
		printf ("A soma dos números ímpares é: %i\n", soma);
	}
}