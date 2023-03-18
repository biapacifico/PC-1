#include <stdio.h>

int fatorial (int num){
	float soma=1;
		
	if (num<0)
		return -1;
	
	else {
	for (int contador=num; contador>0; contador--){
		soma = (soma*contador);
		}
	}
	
	return soma;
}

int main (){
	int num, resultado;
	printf ("Digite um número: ");
	scanf ("%d", &num);

	resultado = fatorial (num);
	
	if (resultado==-1)
		printf ("O número digitado está incorreto\n");
		
	else
		printf ("O fatorial é: %d\n", resultado);
}