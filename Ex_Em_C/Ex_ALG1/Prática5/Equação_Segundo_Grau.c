#include <stdio.h>

int main(void)
{
	int a, b, c;
	double y, e, x, x1, x2, delta, rdelta, ai, res, raiz, raiz1;

	scanf("%d %d %d %lf %lf", &a, &b, &c, &y, &e);
 
	delta = (b * b) - 4 * a * c;

    if(delta < 0)
	{
		printf("Não há raizes reais.");
	}
	else
	{
    	do
    	{
     		raiz =  delta / y;
     		raiz1 = (y + raiz) / 2;
     		y = raiz1;
    	}
    	while(e * 0.5 < raiz1 - raiz || e * 0.5 < raiz - raiz1);
    
    	if (delta > 0)
    	{
    		x1 = (-b + y) / (2 * a);
    		x2 = (-b - y) / (2 * a);
    		printf("Há duas raízes reais: %f e %f.\n", x1, x2);
    	}
    
    	if (delta == 0)
    	{
    		x = -b / (2 * a);
    		printf("Há uma raiz real: %.0f.", x);
    	}
	}

	return 0;
}