#include <stdio.h>

float potencia (int n, float y){
	int resultado=1;
	for (int contador=1; contador<=n; contador++){
		resultado = resultado*y;
	}
	
	return resultado;
}

float VAL (float x, int n, float t){
	float soma=0;
	for (int contador=1; contador<=n; contador++){
		soma = soma + (x/potencia (contador, 1+t));
	}
	
	return soma;
}

int main (){
	float x, t, resultado;
	int n;
	
	printf ("Digite o valor de X: ");
	scanf ("%f", &x);
	printf ("Digite o valor da taxa t: ");
	scanf ("%f", &t);
	printf ("Digite a quantidade de anos: ");
	scanf ("%d", &n);
	
	resultado = VAL (x, n, t);
	
	printf ("O valor de VAL é: %f", resultado);
}