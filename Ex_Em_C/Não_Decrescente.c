#include<stdio.h>

int main (void){
	int a, b;
	printf("Informe dois números");
	scanf("%d %d", &a, &b);
	
	if(a<=b)
	{
		printf("%d %d", a, b);
	}	
	if(b<a)
	{
		printf("%d %d", b, a);
		
	}	
	return 0;
}
