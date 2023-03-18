#include <stdio.h>

int calcular_tempo (int h1, int m1, int h2, int m2){
	int minutos;
	
	if (h2>h1){
		if (m2>=m1)
		minutos = ((h2-h1)*60) + (m2-m1);

		if (m1>m2)
		minutos = (((h2-h1)-1)*60) + ((60-m1)+m2);
	}
	
	if (h1>h2){
		if (m2>=m1)
		minutos = ((24-(h1+h2))*60) + (m2-m1);
		
		if (m1>m2)
		minutos = ((24-(h1+h2))*60) + ((60-m1)+m2);
	}
	
	if (h1==h2){
		if (m2>=m1)
		minutos = m2-m1;
		
		if (m1>m2)
		minutos = (23*60) + ((60-m1)+m2);
	}
	
	return minutos;
}

int main (){
	int h1, m1, h2, m2, resultado;
	
	printf ("Insira o horário de início: ");
	scanf ("%d %d", &h1, &m1);
	printf ("Insira o horário de término: ");
	scanf ("%d %d", &h2, &m2);
	
	resultado = calcular_tempo (h1, m1, h2, m2);
	
	printf ("A quantidade de minutos trasncorridos foi: %d\n", resultado);
}