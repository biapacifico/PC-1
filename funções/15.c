#include <stdio.h>

int mmc (int x, int y){
	int resultado, aux;
	
	for (int contador=2; contador<=y; contador++){
		aux = (x*contador);
		if ((aux&y)==0){
			resultado = aux;
			contador = y+1;
		}
	}
	
	return resultado;
}

int main (){
	int x, y, resultado;

	printf ("Digite dois números inteiros: ");
	scanf ("%d %d", &x, &y);
	
	resultado = mmc (x, y);
	
	printf ("O MMC é: %d", resultado);
}