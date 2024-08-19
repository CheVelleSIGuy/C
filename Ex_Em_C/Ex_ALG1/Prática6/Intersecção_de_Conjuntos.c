#include <stdio.h>

int main(void) 
{
    int a[9], b[9], c[9];
    int i, j, k;

    for(i = 0; i <= 9; i = i + 1)
    {
        scanf("%d", &a[i]);

        if(a[i] == -2)
        {
            i = 10;
        }

        if(a[i] == -1)
        {
            for(j = 0; j <= 9; j = j + 1)
            {
                scanf("%d", &b[j]);

                if(b[j] == -1)
                {
                    for(k = 0; k <= 9; k = k + 1)
                    {
                        scanf("%d", &c[k]);

                        if(c[k] == -1)
                        {
                            for (i = 0; i <= 9 ; i = i + 1)
                            {
                                for (j = 0; j <= 9 ; j = j + 1)
                                {
                                    for (k = 0; k <= 9; k = k + 1)
                                    {
                                        if (a[i] != -1 && a[i] != 0 && a[i] == b[j] && a[i] == c[k])
                                        {
                                            printf("%d ", a[i]);
                                        }
                                    }            
                                }
                            }
                            
                            printf("\n");
                            i = 0;
                            k = 10;
                            j = 10;
                                
                        }
                    }
                }
            }
        }
    }

    return 0;
}