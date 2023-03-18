#include <stdio.h>

int main (){
	
	float soma=0, num=1;
	
	for (int den=1; den<=50; den++){
		soma = soma + (num/den);
		num = num + 2;	
	}
	
	printf ("A soma é: %f", soma);
}