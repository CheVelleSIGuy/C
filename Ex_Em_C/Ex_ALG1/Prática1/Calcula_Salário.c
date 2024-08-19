#include <stdio.h>

int main(void)
{
	char nome[10];
	int idade;
	float sb, sl;


	scanf("%s %d %f", nome, &idade, &sb);

	sb = sb + (sb*0.38);

	sl = (sb*0.20) + sb ;

	sl = sl*0.85;

	printf("%s\n%d\n%f\n%f\n", nome, idade, sb, sl);

	return 0;

}