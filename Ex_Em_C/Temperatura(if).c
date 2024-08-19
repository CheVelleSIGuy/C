#include<stdio.h>

int main (void){
	int temp;
	printf("Informe a temperatura atual: ");
	scanf("%d", &temp);
	
	if(temp > 30)
	{
		printf("hoje está quente\n");
	}
	printf("Até breve\n");	
	
	return 0;
}
