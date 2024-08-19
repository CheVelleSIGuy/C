#include <stdio.h>
#include <string.h>

int main(void) 
{
    int mat[15][15];
    int i, j, k, n, aux, aux1, at1, at2, val, cont;
    char info[10];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i = i + 1)
    {
        for(j = 0; j < n; j = j + 1)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    scanf("%s", info);
    
    while(strcmp(info, "fim") != 0)
    {
        if(strcmp(info, "at_v") == 0)
        {
            scanf("%d %d %d", &at1, &at2, &val);
            
            mat[at1][at2] = val;
        }
        
        if(strcmp(info, "v_sim") == 0)
        {
            cont = 0;
            for(i = 0; i < n ; i = i + 1)
            {
                for(j = 0; j < n  ; j = j + 1)
                {
                    if(mat[i][j] == mat[j][i])
                    {
                        cont = cont + 1;
                    }
                    else
                    {
                        cont = cont - 1;
                    }
                }
            }
            
            if(cont == (n * n))
            {
                printf("sim\n");
            }
            else
            {
                printf("não\n");
            }
        }
        
        if(strcmp(info, "v_lat") == 0)
        {
            cont = 0;
            
            for(i = 0; i < n ; i = i + 1)
            {
                for(j = 0; j < n ; j = j + 1)
                {
                    for(k = 0; k < n; k = k + 1)
                    {
                        if(mat[i][j] == mat[i][k] && j != k)
                        {
                            cont = cont + 1;
                        }
                    }
                }
            }
            
            for(i = 0; i < n ; i = i + 1)
            {
                for(j = 0; j < n ; j = j + 1)
                {
                    for(k = 0; k < n; k = k + 1)
                    {
                        if(mat[i][j] == mat[k][j] && i != k)
                        {
                            cont = cont + 1;
                        }
                    }
                }
            }
            
            if(cont == 0)
            {
                printf("sim\n");
            }
            else
            {
                printf("não\n");
            }
        }
        
        if(strcmp(info, "imprime") == 0)
        {
            for(i = 0; i < n; i = i + 1)
            {
                for(j = 0; j < n; j = j + 1)
                {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }
        }
        
        scanf("%s", info);
    }
    
    return 0;
}