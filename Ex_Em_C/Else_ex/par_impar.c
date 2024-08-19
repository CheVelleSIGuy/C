#include <stdio.h>

int main(void)
{
    int a;
    printf("Informe um número: \n");
    scanf("%d", &a);
    
    a = a % 2;
    
    if(a = 0)
    {
        printf("O número informado é par.");
    }
    else
    {
        printf("O número informado é ímpar.");
    }
    
    
    return 0;
}