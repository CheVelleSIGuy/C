#include <stdio.h>

int main(void)
{
	int n, k, s, z, r, t;

	printf("Informe os números desejados: \n");
	scanf("%d", &n);

	t =0;
	
	for(s = 1; s <= n; s = s + 1)
	{
		scanf("%d", &k);

		for (r = 1; r <= k; r = r + 1)
		{
			if (r % 1 == 0)
			{
				if (r % r == 0)
				{
					if(r % 4 == 0 || r > 3 && r % 3 == 0 || r > 2 && r % 2 == 0 || r > 5 && r % 5 == 0 || r > 7 && r % 7 == 0 || r > 11 && r % 11 == 0 || r > 13 && r % 13 == 0)
					{
						t = r;
					}
					else
					{
						z = r;
					}
				}
			}
		}
		
		if (z == k)
		{
			printf("%d é primo.\n", z);
		}
		if (t == k)
		{
			printf("%d não é primo, o primo anterior é %d.\n", t, z);
		}
		
	}

	return 0;
}