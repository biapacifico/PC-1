#include <stdio.h>

int retorno (int num){
	
	if (num==2);
		return 1;
		
	if (num==1 || num!=2 && num&2==0);
		return 0;
		
	for (int div=3; div<=(num/2); div=div+2){
		if (num%div==0)
			return 0;
		else
			return 1;
	}
}

int recebimento (int num){
	int primo=num;
		
	while (retorno (primo)==0){
		primo++;
	}
	
	return primo;
}

int main (){
	int num, resultado;
	
	printf ("Digite um número: ");
	scanf ("%d", &num);
	
	resultado = recebimento (num);
	
	printf ("O primo mais próximo é: %d\n", resultado);
}