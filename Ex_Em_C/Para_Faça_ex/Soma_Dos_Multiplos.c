#include <stdio.h>

int main(void)
{
    int x, n, c, a, b;
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("informe o valor de b: ");
    scanf("%d", &b);
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    
    c = 0;
    
    for (n = a; n <= b; n = n + 1)
    {  
        if(n % x == 0)
        {
            c = c + n;
        }
    }
    
    printf("%d", c);
    
    return 0;
}

