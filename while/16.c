#include <stdio.h>

int main (){

	int num=0, contador=1;
	
	do{
	num++;
	(num/contador);
	contador++;
		if (num%contador!=0)
			num++;
	} while (contador<=20);
	
	printf ("%i", num);
}