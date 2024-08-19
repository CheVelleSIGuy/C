#include <stdio.h>

int main(void)
{
	int a, a1, a2, a3, b, b1, b2, b3, z, y, x, aux, aux1, aux2, res, res1, res2, comp, comp1, comp2, ui, cont, u, re, re1, mok, man, man1, assis;

	scanf("%d %d", &a, &b);

	while(a > -1)
	{
		a1 = a;
		a2 = 0;
		a3 = 0;
		b1 = b;
		b2 = 0;
		b3 = 0;
		ui = 0;
		res = 0;
		res1 = 0;
		res2 = 0;
		comp = 0;
		comp1 = 0;
		comp2 = 0;
		man = 0;
		man1 = 0;
		x = 1;

		/* Tranformar octal para decimal a e b */
		for(z = a; z > 0; z = z / 10)
		{
			a3 = z % 10;
			a2 = a2 + (a3 * x);
			x = x * 8;
		}

		x = 1;
		ui = 0;
		cont = 0;

		for(z = b; z > 0; z = z / 10)
		{
			b3 = z % 10;
			b2 = b2 + (b3 * x);
			x = x * 8;
		}

		x = 1;
		u = 0;

		/* tranformar a e b em binário */
		for (z = a2; z > 0; z = z / 2)
		{
			u = (z % 2) * x;
			res = res + u;
			x = x * 10;
		}
		
		x = 1;
		u = 0;
		
		for (y = b2; y > 0; y = y / 2)
		{
			u = (y % 2) * x;
			res1 = res1 + u;
			x = x * 10;
		}

		x = 1;
		comp = res;
		comp1 = res1;

		/* Comparar o OU lógico */
		if (res > res1)
		{
			for (aux = comp; aux > 0; aux = aux / 10)
			{
				aux1 = aux % 10;
				aux2 = comp1 % 10;
				comp1 = comp1 / 10;

				if (aux1 > aux2)
				{
					comp2 = comp2 + aux1 * x;
				}
				else
				{
				    comp2 = comp2 + aux2 * x;
				}

				x = x * 10;
			}
		}
		else
		{
			for (aux = comp1; aux > 0; aux = aux / 10)
			{
				aux2 = aux % 10;
				aux1 = comp % 10;
				comp = comp / 10;

				if (aux2 > aux1)
				{
					comp2 = comp2 + aux2 * x;
				}
				else
				{
				    comp2 = comp2 + aux1 * x;
				}

				x = x * 10;
			}
		}

		mok = 1;

		/* Transformar Decimal para binário */
		for (re = comp2; re > 0; re = re / 10)
		{	
			assis = re % 10;

			if (assis == 1)
			{
				man = man + mok;
			}

			mok = mok * 2;
		}
		
		u = 0;
		mok = 1;
		a3 = 0;
		x = 1;
		man1 = 0;

		/* Transformar octal para binário */
		for(z = man; z > 0; z = z / 8)
		{
			u = (z % 8) * x;
			man1 = man1 + u;
			x = x * 10;
		}

		printf("%d %d %d %d %d %d %d\n", a2, b2, res, res1, comp2, man, man1);

		scanf("%d %d", &a, &b);
	}


	return 0;
}