#include <stdio.h>

int primo (int num){

	if (num==1 || num!=2 && num%2==0)
		return 0;
		
	if (num==2)
		return 1;
	
	for (int divisor=3; divisor<=(num/2); divisor = divisor+2){
		if (num%divisor==0)
			return 0;
		else 
			return 1;
	}
}

int main (){
	int num, resultado;
	printf ("Digite um número: ");
	scanf ("%d", &num);
	
	resultado = primo (num);
	
	printf ("%d\n", resultado);
}