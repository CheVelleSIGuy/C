#include <stdio.h>

int main(void)
{
    char resp;
    printf("Pense em um número de 1 á 8\n");
    printf("Digite S para sim ou N para não\n");
    printf("O número é par?\n");
    scanf(" %c", resp);
    
    if(resp == 'S')//2, 4, 6, 8
        printf("O número é maior que 5?");
        scanf(" %c", resp);
        
        if(resp == 'S')
        {
            printf("O número é menor que 7?");
            scanf(" %c", resp);
            
            if(resp == 'S')
            {
                printf("O número em que você está pensando é o 6");
            }
            else
            {
                printf("O número em que você está pensando é o 8");
            }
        }
        
        else
        {
            printf("O número é maior que 3?");
            scanf(" %c", resp);
            if(resp == 'S')
            {
                printf("O número em que você está pensando é o 4");
            }
            else
            {
                printf("O número em que você está pensando é o 2");
            }
        }
    }
    
    else //1, 3, 5, 7
    {
        printf("o número é maior que 4?");
        scanf(" %c", resp);
        
        if(resp == 'S')
        {
            printf("O número é menor que 6?");
            scanf(" %c", resp);
            
            if(resp == 'S')
            {
                printf("O número em que você está pensando é o 5");
            }
            else
            {
                printf("O número em que você está pensando é o 7");
            }
        }
        else
        {
            printf("O número é maior que 2?");
            scanf(" %c", resp);
            if(resp == 'S')
            {
                printf("O número em que você está pensando é o 3");
            }
            else
            {
                printf("O número em que você está pensando é o 1");
            }
        }
        
    }
    return 0;
}