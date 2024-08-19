#include <math.h>;

int main(void)
{
	int mq, lt, rt, mo, x, y ,z, t, a, plt;

	scanf("Digite x: %2.2f" x);
	scanf("Digite y: %2.2f" y);
	scanf("Digite z: %2.2f" z);

	a = (x*x)+(y*y)+(z*z)*2;

	lt = a * 3;

	rt = 5;

	mo = 20 * a;

	plt= 45 * 4;

	t = rt + mo + plt;

	printf("São necessários %2.2f litros de tinta para pintar a caixa externamente. O Valor total gasto será de R$%2.2f.", lt, t);

	return 0;
}