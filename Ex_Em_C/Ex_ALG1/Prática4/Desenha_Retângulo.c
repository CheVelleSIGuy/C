#include <stdio.h>

int main(void)
{
	int a, b, c, z, x, soma1, soma2;

	printf("Informe o valor de A e B: \n");
	scanf("%d %d", &a, &b);

	soma1 = 0;
	soma2 = 0;

	for ( z = 1; z <= b * a; z = z + 1)
    {
        printf("%d ", z);

        if (z % b == 0)	
        {
            printf("\n");
        }
        
        if (z % 2 == 0)
        {
        	x = x + 1;
        }

 		if (a % 2 == 0)
 		{
 			if(z > b * ((a / 2) - 1) && z <= b * (a / 2))
 			{
 				soma1 = soma1 + z;
 			}
 			if (z > b * (a / 2) && z <= b * ((a / 2) + 1))
 			{
 				soma2 = soma2 + z;
 			}
 		}
 		else
 		{
 			if (z > b * (a / 2) && z <= b * ((a / 2) + 1))
 			{
 				soma1 = soma1 + z;
 			}
 		}
    }

    printf("%d\n", soma1);

    if (soma2 > 1)
    {
    	printf("%d\n", soma2);
    }

    printf("%d\n", x);
 
	return 0;
}