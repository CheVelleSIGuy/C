#include <stdio.h>

int main(void)
{
    int temp;
    printf("Informe a temperatura atual\n");
    scanf("%d", &temp);
    
    if(temp > 35)
    {
        printf("Hoje é um dia quente!\n");
    }
    else
    {
        if(temp < 25)
        {
            printf("Hoje é um dia frio!\n");
        }
        else
        {
            printf("Hoje é um dia ameno!\n");
        }
    }
    
    
    return 0;
}