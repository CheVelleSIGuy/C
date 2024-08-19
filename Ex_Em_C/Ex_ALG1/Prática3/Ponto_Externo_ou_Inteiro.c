#include <stdio.h>

int main(void)
{
	int d1x, d1y, d2x, d2y, px, py;
	printf("Digite o valor de x e y no d1: \n");
	scanf("%d %d", &d1x, &d1y);
	printf("Digite o valor de x e y no d2: \n");
	scanf("%d %d", &d2x, &d2y);
	printf("Digite o valor de x e y no ponto determinado: \n");
	scanf("%d %d", &px, &py);

	if (d1x > px && d1y > py && d2x > px && d2y > py)
	{
		printf("Interno");
	}
	else
	{
		if (d1x < px && d1y < py && d2x > px && d2y > py)
		{
			printf("Interno");
		}
		else
		{
			if (d1x > px && d1y > py && d2x < px && d2y < py)
			{
				printf("Interno");
			}
			else
			{
				if (d1x > px && d1y < py && d2x > px && d2y < py)
				{
					printf("Interno");
				}
				else
				{
					if (d1x < px && d1y > py && d2x < px && d2y > py)
					{
						printf("Interno");
					}
					else
					{
						if (d1x > px && d1y < py && d2x < px && d2y > py)
						{
							printf("Interno");
						}
						else
						{
							if (d1x < px && d1y > py && d2x > px && d2y < py)
							{
								printf("Interno");
							}
							else
							{
								printf("Externo");
							}
						}
					}
				}
			}
		}
	
	}
	return 0;
}