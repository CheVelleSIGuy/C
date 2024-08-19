#include <stdio.h>

int main(void) 
{
    int matriz[3][3];
    int i, j;
    
    for(i = 0; i < 3; i = i + 1)
    {
        for(j = 0; j < 3; j = j + 1)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < 3; i = i + 1)
    {
        for(j = 0; j < 3; j = j + 1)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}