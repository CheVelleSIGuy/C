#include <stdio.h>

int main(void) 
{
    int a[15], b[15], c[30];
    int i, j, k, n, m, aux, d;
    
    n = 0;
    m = 0;
    
    scanf("%d", &n);
    
    while(n < 51)
    {
        /*A*/
        for(i = 0; i <= n - 1; i = i + 1)
        {
            scanf("%d", &a[i]);
        }
        
        /*B*/
        scanf("%d", &m);
        
        for(i = 0; i <= m - 1; i = i + 1)
        {
            scanf("%d", &b[i]);
        }
        
        /*Comparador C*/
        for(i = 0; i <= n - 1; i = i + 1)
        {
           c[i] = a[i];
        }
        
        for(i = 0; i <= m - 1; i = i + 1)
        {
           c[n+i] = b[i];
        }
        
        for (i = 0; i < n + m ; i = i + 1)
        {
            for (j = i + 1; j < n + m; j = j + 1)
            {
                if (c[i] > c[j])
                {
                    aux = c[i];
                    c[i] = c[j];
                    c[j] = aux;
                }
            }
        }
        
        for(i = 0; i <= m + n - 1; i = i + 1)
        {
           printf("%d ", c[i]);
        }
        
        printf("\n");
        
        scanf("%d", &n);
    }
    return 0;
}