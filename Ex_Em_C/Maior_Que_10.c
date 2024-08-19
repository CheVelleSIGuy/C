#include<stdio.h>

int main (void){
	float a, b, resultado;
	printf("Informe dois valores");
	scanf("%f %f", &a, &b);
	resultado = a + b;
	
	if(resultado > 10)
	{
		printf("A soma dos dois valores é: %.2f", resultado);
	}
	
	printf("A soma dos dois valores são menores que 10");		
	
	return 0;
}
