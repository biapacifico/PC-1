#include <stdio.h>

int main (){

	int a=1, b=2, c, d;
	
	for (int termo=a; termo<4000000; termo=a+b){
		c=a+b;
		a=b;
		b=c;
		
		if (c%2==0)
			d = d+c;
	}
	
	printf ("%d", d);
}