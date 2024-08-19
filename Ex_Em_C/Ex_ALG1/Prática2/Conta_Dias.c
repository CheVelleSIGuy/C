#include <stdio.h>

int main(void)
{
	int dia, mes, ano, diacorrido;
	scanf("%d/%d/%d", &dia, &mes, &ano);

    ano = ano % 4;
    if(ano == 0)
    {
		if(mes == 1)
		{
		diacorrido = dia;
		}
		if(mes == 2)
		{
			diacorrido = dia + 31;
		}
		if(mes == 3)
		{
			diacorrido = dia + 31 + 29;
		}
		if(mes == 4)
		{
			diacorrido = dia + 31 + 29 + 31;
		}
		if(mes == 5)
		{
			diacorrido = dia + 31 + 29 + 31 + 30;
		}
		if(mes == 6)
		{
			diacorrido = dia + 31 + 29 + 31 + 30 + 31;
		}
		if(mes == 7)
		{
			diacorrido = dia + 31 + 29 + 31 + 30 + 31 + 30;
		}
		if(mes == 8)
		{
			diacorrido = dia + 31 + 29 + 31 + 30 + 31 + 30 + 31;
		}
		if(mes == 9)
		{
		    diacorrido = dia + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
		}
		if(mes == 10)
		{
			diacorrido = dia + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		}
		if(mes == 11)
		{
			diacorrido = dia + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		}
		if(mes == 12)
		{
			diacorrido = dia + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		}
    }
	if(ano != 0)
	{
		if(mes == 1)
		{
		diacorrido = dia;
		}
		if(mes == 2)
		{
			diacorrido = dia + 31;
		}
		if(mes == 3)
		{
			diacorrido = dia + 31 + 28;
		}
		if(mes == 4)
		{
			diacorrido = dia + 31 + 28 + 31;
		}
		if(mes == 5)
		{
			diacorrido = dia + 31 + 28 + 31 + 30;
		}
		if(mes == 6)
		{
			diacorrido = dia + 31 + 28 + 31 + 30 + 31;
		}
		if(mes == 7)
		{
			diacorrido = dia + 31 + 28 + 31 + 30 + 31 + 30;
		}
		if(mes == 8)
		{
			diacorrido = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31;
		}
		if(mes == 9)
		{
		diacorrido = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		}
		if(mes == 10)
		{
			diacorrido = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		}
		if(mes == 11)
		{
			diacorrido = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		}
		if(mes == 12)
		{
			diacorrido = dia + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		}
	}

	printf("%d", diacorrido);
	return 0;
}