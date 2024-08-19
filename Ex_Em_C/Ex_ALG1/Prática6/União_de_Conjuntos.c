#include <stdio.h>

int main(void) 
{
    int a[9], b[9], c[9], d[24];
    int i, j, k, aux, aux0, aux1, aux2;
    int cont, cont0;

    for(i = 0; i <= 9; i = i + 1)
    {
    	a[i] = 0;
    	b[i] = 0;
    	c[i] = 0;
    }

    aux = 0;

    for(i = 0; i <= 8; i = i + 1)
    {
        scanf("%d", &a[i]);
        aux = aux + 1;

        if(a[i] == -2)
        {
            i = 10;
        }

        if(a[i] == -1)
        {	
        	aux = aux - 1;
        	aux0 = 0;

            for(j = 0; j <= 8; j = j + 1)
            {
                scanf("%d", &b[j]);
                aux0 = aux0 + 1;

                if(b[j] == -1)
                {
                	aux0 = aux0 - 1;
                	aux1 = 0;

                    for(k = 0; k <= 8; k = k + 1)
                    {
                        scanf("%d", &c[k]);
                        aux1 = aux1 + 1;

                        if(c[k] == -1)
                        { 	
                        	aux1 = aux1 - 1;
                        	aux2 = 0;

						    for (i = 0; i < aux; i = i + 1)
						    {
						    	d[aux2] = a[i];
						    	aux2 = aux2 + 1;
						    }

						    for (i = 0; i < aux0; i = i + 1)
						    {
						    	cont = 0;

						    	for (j = 0; j < aux; j = j + 1)
						    	{
						    		if (b[i] == a[j])
						    		{
						    			cont = cont + 1;
						    		}
						    	}

						    	if (cont == 0)
						    	{
						    		d[aux2] = b[i];
						    		aux2 = aux2 + 1;
						    	}	
						    }

						    for (i = 0; i < aux1; i = i + 1)
						    {
						    	cont0 = 0;

						    	for (j = 0; j < aux2; j = j + 1)
						    	{
						    		if (d[j] == c[i])
						    		{
						    			cont0 = cont0 + 1;
						    		}
						    	}

						    	if (cont0 == 0)
						    	{
						    		d[aux2] = c[i];
						    		aux2 = aux2 + 1;
						    	}
						    }

						    for (i = 0; i < aux2; i = i + 1)
						    {
						    	printf("%d ", d[i]);
						    }

                            printf("\n");
                            i = -1;
                            k = 10;
                            j = 10;
                            aux = 0;
                            aux0 = 0;
                            aux1 = 0;
                            aux2 = 0;   
                        }
                    }
                }
            }
        }
    }

    return 0;
}