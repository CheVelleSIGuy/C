#include <stdio.h>
#include <string.h>

int main(void) 
{
    int mat[15][15];
    int i, j, k, m, n, help, aux, aux1;
    char inv[10];
    
    aux = 0;
    aux1 = 0;
    scanf("%d %d", &m, &n);
    
    for(i = 0; i < m; i = i + 1)
    {
        for(j = 0; j < n; j = j + 1)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    scanf("%s", inv);
    
    while(strcmp(inv, "fim") != 0)
    {
        if(strcmp(inv, "inv_l") == 0)
        {
            aux1 = 0;
            scanf("%d", &help);
            
            for(j = n - 1; j >= n / 2; j = j - 1)
            {
                aux = mat[help][j];
                mat[help][j] = mat[help][aux1];
                mat[help][aux1] = aux;
                aux1 = aux1 + 1;
            }
        }
        
        if(strcmp(inv, "inv_c") == 0)
        {
            aux1 = 0;
            scanf("%d", &help);
            
            for(i = m - 1; i >= m / 2; i = i - 1)
            {
                aux = mat[i][help];
                mat[i][help] = mat[aux1][help];
                mat[aux1][help] = aux;
                aux1 = aux1 + 1;
            }
        }
        
        if(strcmp(inv, "invl_se") == 0)
        {
            scanf("%d", &help);
            
            for(i = 0; i < m; i = i + 1)
            {
                for(j = 0; j < n; j = j + 1)
                {
                    if(mat[i][j] == help)
                    {
                        aux1 = 0;
                        
                        for(k = n - 1; k >= n / 2; k = k - 1)
                        {
                            aux = mat[i][k];
                            mat[i][k] = mat[i][aux1];
                            mat[i][aux1] = aux;
                            aux1 = aux1 + 1;
                        }
                        j = 16;
                    }
                }
            }
        }
        
        if(strcmp(inv, "invc_se") == 0)
        {
            scanf("%d", &help);

            for(j = 0; j < n; j = j + 1)
            {
                for(i = 0; i < m; i = i + 1)
                {
                    if(mat[i][j] == help)
                    {
                        aux1 = 0;
                        
                        for(k = m - 1; k >= m / 2; k = k - 1)
                        {
                            aux = mat[k][j];
                            mat[k][j] = mat[aux1][j];
                            mat[aux1][j] = aux;
                            aux1 = aux1 + 1;
                        }
                        i = 16;
                    }
                }
            }
        }
        
        if(strcmp(inv, "imprime") == 0)
        {
            for(i = 0; i < m; i = i + 1)
            {
                for(j = 0; j < n; j = j + 1)
                {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
        
        scanf("%s", inv);
    }
    return 0;
}