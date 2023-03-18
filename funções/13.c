#include <stdio.h>

float fatorial (int i){
	float soma=1;
	for (int contador=i; contador>0; contador--){
		soma = (soma*contador);
	}
	
	return soma;
}

float potencia (int i){
	float resultado=1;
	for (int contador=1; contador<=i; contador++){
		resultado = (resultado*i);
	}
	
	return resultado;
}

float soma (int n){
	float soma=0;
	for (int i=3; i<=n; i++){
		soma = soma + (fatorial (i)/potencia (i));
	}

	return soma;
}

int main (){
	int n;
	float resultado;
	
	printf ("Digite o valor de n: ");
	scanf ("%d", &n);
	
	resultado = soma (n);
	
	printf ("O somatório é: %f\n", resultado);
}