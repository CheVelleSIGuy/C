#include <stdio.h>

int main(void)
{
	float a, b, c, d, maior, soma;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	maior = a;
	if(b > maior)
	{
		maior = b;
	}
	if(c > maior)
	{
		maior = c;
	}
	if(d > maior)
	{
		maior = d;
	}
	
	soma = (a + b + c + d) - maior;
	printf("A soma dos três menores números resulta em: %f\n" , soma);
	
	return 0;
}
