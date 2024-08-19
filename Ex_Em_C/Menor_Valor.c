#include<stdio.h>

int main (void){
	float a, b, c, d, menor;
	printf("Informe quatro valores");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	menor = a;
	
	if(b < menor)
	{
		menor = b;
	}
	if(c < menor)
	{
		menor = c;
	}
	if(d < menor)
	{
		menor = d;
	}
	
	printf("O menor valor é %.2f", menor);			
		
	return 0;
}
