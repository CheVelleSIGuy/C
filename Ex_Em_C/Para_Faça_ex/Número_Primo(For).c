#include <stdio.h>

int main(void)
{
    int n, a, b;
    printf("Informe o valor de n: \n");
    scanf("%d", &n);
    
    b = 0; 
    
    for (a = 1; a <= n; a = a + 1)
    {  
        if(n % a == 0)
        {
            b = b + 1;
        
        }
    }
    printf("%d\n", b);
    
    if(b == 2)
    {
        printf("É um número primo.");
    }
    else
    {
        printf("Não é um número primo.");
    }

    return 0;
}

