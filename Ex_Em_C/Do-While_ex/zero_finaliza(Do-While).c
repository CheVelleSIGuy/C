#include <stdio.h>

int main(void)
{
	int n, z;

	scanf("%d", &n);

	do
	{	
		if (n > z)
		{
			z = n;
		}

		scanf("%d", &n);
	}
	while(n > 0);

	printf("%d\n", z);

	return 0;
}