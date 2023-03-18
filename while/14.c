#include <stdio.h>

int main (){
	
	float soma=0;
	
	for (int teste=1; teste<1000; teste++){
		if (teste%3==0 || teste%5==0)
			soma = soma + teste;
	}
	
	printf ("A soma é: %.2f", soma);

}