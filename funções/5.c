#include <stdio.h>

float teste (int ano){

	if (ano%100==0 && ano%400==0 || ano%100!=0 && ano%4==0){
		return 1;
	}
	return 0;
}

int main (){

	int ano, resultado;
	printf ("Digite um ano: ");
	scanf ("%d", &ano);
	
	resultado = teste (ano);
	
	printf ("%i\n", resultado);
}