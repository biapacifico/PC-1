#include <stdio.h>

float z (int n){
	
	float soma=0;
	
	for (int i=3; i<=n; i++){
		soma = soma + ((5*i)+2);
	}
	
	return soma;
}

int main (){
	
	int n;
	float resultado;
	printf ("Digite o valor de n: ");
	scanf ("%d", &n);

	resultado = z (n);
	
	printf ("O resultado é: %.2f\n", resultado);
}