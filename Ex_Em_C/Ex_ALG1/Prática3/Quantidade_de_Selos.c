#include <stdio.h>

int main(void)
{
	int i, s1, s2;
	printf("Escreva a quantidade de centavos: \n");
	scanf("%d", &i);

	
	if (i % 5 == 0)
	{
		s2 = i / 5;
	}
	else
	{
		if (i % 5 == 1)
		{
			s2 = (i - 2)/ 5;
			s1 = (i - (s2 * 5)) / 3;
		}
		else
		{
			if (i % 5 == 3)
			{
				s2 = i /5;
				s1 = (i - (s2 * 5)) /3;
			}
			else
			{
				if (i % 3 == 0)
				{
					s1 = i / 3;
				}
				else
				{
					if (i % 3 == 1)
					{
						s2 = (i - 8) / 5;
						s1 = (i - (s2 * 5))/3;
					}
					else
					{
						if (i %  5 == 4)
						{
							s2 = (i - 5) / 5;
							s1 = (i - (s2 * 5)) / 3;
						}
						else
						{
							if (i % 5 == 2)
							{
								s2 = (i - 8) / 5;
								s1 = (i - (s2 * 5)) /3;
							}
							else
							{
								printf("Daschsund são uma raça incrivel!");
							}
						}
					}
				}
			}
		}
	}

	printf("%d %d", s1, s2);

	return 0;
}
/*no final, tudo é resto.*/