#include <stdio.h> 

int main (){
	
	float soma=0, den=1;
			
	for (int num=1; num<=10; num++){
		den = num*num;
		
		if (num%2==0)
		soma = soma - (num/den);
		
		else 
		soma = soma + (num/den);
		
	}
	
	printf ("%f", soma);

}