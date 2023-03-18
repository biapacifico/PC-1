#include <stdio.h>

int potencia (int base, int expoente){
	int resultado=1;
	for (int contador=1; contador<=expoente; contador++){
		resultado = resultado*base;
	}
	
	return resultado;
}

int main (){
	int base, expoente, resultado;
	printf ("Digite a base: ");
	scanf ("%d", &base);
	printf ("Digite o expoente: ");
	scanf ("%d", &expoente);

	resultado = potencia (base, expoente);
	
	printf ("O resultado é: %i\n", resultado);
}