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
	
	return num;
}

int Soma_Primos (int quantidade){
	float soma=0;
	int num=2;
	
	for (int contador=1; contador<=quantidade; contador++){
		if (primo (num)==1)
			soma = soma + num;
		
		if (primo (num)==0)
		num++;
	}
	
	return soma;
}

int main (){
	int quantidade, resultado;
	printf ("Digite a quantidade N desejada: ");
	scanf ("%d", &quantidade);
	
	resultado = Soma_Primos (quantidade);
	
	printf ("A soma é: %d", resultado);
}