#include <stdio.h>

int main(void) 
{
    int matriz[5][5];
    int i, j, soma, n;
    
    soma = 0;
    
    for(i = 0; i < 5; i = i + 1)
    {
        for(j = 0; j < 5; j = j + 1)
        {
          scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < 5; i = i + 1)
    {
        for(j = 0; j < 5; j = j + 1)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(j = 0; j < 5; j = j + 1)
    {
        soma = soma + matriz[2][j];
    }
    printf("A soma dos elementos da linha 2 é: %d\n", soma);
    
    soma = 0;
    
    for(i = 0; i < 5; i = i + 1)
    {
        soma = soma + matriz[i][4];
    }
    printf("A soma dos elementos da coluna 4 é: %d\n", soma);
    
    soma = 0;
    
    for(i = 0; i < 5; i = i + 1)
    {
        soma = soma + matriz[i][i];
    }
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
    
    soma = 0;
    n = 4;
    
    for(i = 0; i < 5; i = i + 1)
    {
        soma = soma + matriz[i][n - i];
    }
    printf("A soma dos elementos da diagonal secundária é: %d\n", soma);
    
    soma = 0;
    
    for(i = 0; i < 5; i = i + 1)
    {
        for(j = 0; j < 5; j = j + 1)
        {
            soma = soma + matriz[i][j];
        }
    }
    printf("A soma de todos os elementos da matriz é: %d\n", soma);
    return 0;
}