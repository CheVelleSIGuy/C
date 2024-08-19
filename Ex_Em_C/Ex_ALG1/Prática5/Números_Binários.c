#include <stdio.h>

int main(void)
{
	int a, b, z, x, y, res1, res2, u, comp1, comp2, aux, aux1, aux2, comp3, re, re1, assis, mok, man;

	scanf("%d %d", &a, &b);

	while(a > 0)
	{
		res1 = 0;
		res2 = 0;
		comp3 = 0;
		assis = 0;
		mok = 0;
		man = 0;
		x = 1;
		u = 0;
		for (z = a; z > 0; z = z / 2)
		{
			u = (z % 2) * x;
			res1 = res1 + u;
			x = x * 10;
		}
		
		x = 1;
		u = 0;
		
		for (y = b; y > 0; y = y / 2)
		{
			u = (y % 2) * x;
			res2 = res2 + u;
			x = x * 10;
		}

		x = 1;
		comp1 = res1;
		comp2 = res2;

		if (res1 > res2)
		{
			for (aux = comp1; aux > 0; aux = aux / 10)
			{
				aux1 = aux % 10;
				aux2 = comp2 % 10;
				comp2 = comp2 / 10;

				if (aux1 == aux2)
				{
					comp3 = comp3 + aux1 * x;
				}
				x = x * 10;
			}
		}
		else
		{
			for (aux = comp2; aux > 0; aux = aux / 10)
			{
				aux2 = aux % 10;
				aux1 = comp1 % 10;
				comp1 = comp1 / 10;

				if (aux1 == aux2)
				{
					comp3 = comp3 + aux2 * x;
				}
				x = x * 10;
			}
		}

		mok = 1;

		for (re = comp3; re > 0; re = re / 10)
		{	
			assis = re % 10;

			if (assis == 1)
			{
				man = man + mok;
			}

			mok = mok * 2;
		}
		
		printf("%d %d %d %d\n", res1, res2, comp3, man);
		
		scanf("%d %d", &a, &b);
	}

	return 0;
}