#include <stdio.h>

int main(void) 
{
    int rua[100][100];
    int n, m, i, j;
    
    printf("Informe os valores de linhas e colunas de ruas: ");
    scanf("%d %d", &n, &m);
    
    printf("Preencha com 1 se houver buracos, ou 0 se não tiver.\n");
    
    for(i = 0; i < n; i = i + 1)
    {
        for(j = 0; j < m; j = j + 1)
        {
            scanf("%d", &rua[i][j]);
        }
    }
    
    printf("\n");
    
    for(i = 0; i < n; i = i + 1)
    {
        for(j = 0; j < m; j = j + 1)
        {
            printf("%d ", rua[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < n; i = i + 1)
    {
        for(j = 0; j < m; j = j + 1)
        {
            if(rua[i][j] == 1)
            {
                rua[i][j] = 9;
            }
        }
    }
    
    printf("\n");
    
    for(i = 0; i < n; i = i + 1)
    {
        for(j = 0; j < m; j = j + 1)
        {
            if(rua[i][j] == 0)
            {
                if(rua[i][j - 1] == 9 && j > 0)
                {
                    rua[i][j] = rua[i][j] + 1;
                }
                if(rua[i][j + 1] == 9 && j < n)
                {
                    rua[i][j] = rua[i][j] + 1;
                }
                if(rua[i - 1][j] == 9 && i > 0)
                {
                    rua[i][j] = rua[i][j] + 1;
                }
                if(rua[i + 1][j] == 9 && i < m)
                {
                    rua[i][j] = rua[i][j] + 1;
                }
            }
        }
    }
    
    for(i = 0; i < n; i = i + 1)
    {
        for(j = 0; j < m; j = j + 1)
        {
            printf("%d ", rua[i][j]);
        }
        printf("\n");
    }
    return 0;
}