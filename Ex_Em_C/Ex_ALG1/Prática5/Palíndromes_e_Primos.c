#include <stdio.h>

int main(void)
{
	int n, z, y, cont, rec, a, b, c, d, e, f, g, soma;

	scanf("%d", &n);

	while(n > 0)
	{
		rec = n;
		for (y = 1; y <= n; y = y + 1)
		{
			if (n % y == 0)
			{
				cont = cont + 1;
			}
		}

		a = n % 10;
		n = n / 10;
		b = n % 10;
		n = n / 10;
		c = n % 10;
		n = n / 10;
		d = n % 10;
		n = n / 10;
		e = n % 10;
		n = n / 10;
		f = n % 10;
		n = n / 10;
		g = n % 10;
		 
		if (cont <= 2)
		{
			if (a > 1 && rec < 10 || a == b && rec < 100 || a == c && rec < 1000 || a == d && b == c && rec < 10000 || a == e && b == d && rec < 100000 || a == f && b == e && c == d && rec < 1000000)
			{
				printf("%d\n", rec);
			}
		}	

		soma = soma + (a + b + c + d + e + f + g);

		scanf("%d", &n);

		cont = 0;
	}

	printf("%d", soma);
	

	return 0;
}