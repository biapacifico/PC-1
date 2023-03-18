#include <stdio.h>

float soma (int n1, int n2){
	
	float soma=0;
	
	for (int contador=n1; contador<=n2; contador++){
		if (contador%2!=0){
			soma = soma + contador;
		}
	}
	
	return soma;
}


int main (){

	int n1, n2, resultado;
	printf ("Digite um número inteiro: ");
	scanf ("%d", &n1);
	printf ("Digite outro número inteiro: ");
	scanf ("%d", &n2);
	
	if (n2<n1){
		printf ("Intervalo inválido");
	} 
	else{
		resultado = soma (n1, n2);
	} 
	
	printf ("A soma dos números ímpares é: %d\n", resultado);
}