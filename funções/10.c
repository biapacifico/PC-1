#include <stdio.h>

int fatorial (int i){
	float soma=1;
		
	for (int contador=i; contador>0; contador--){
		soma = (soma*contador);
		}
	
	return soma;
}

int soma (int n){
	float soma=0;
	
	for (int i=3; i<=n; i++){
		soma = soma + fatorial (i);
	}
	
	return soma;
}

int main (){
	int n, resultado;
	printf ("Digite o valor de n: ");
	scanf ("%d", &n);
	
	resultado = soma (n);

	printf ("O fatorial é: %d\n", resultado);

}