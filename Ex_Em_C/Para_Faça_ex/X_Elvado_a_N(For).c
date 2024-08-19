#include <stdio.h>

int main(void)
{
    int x, n, c, a;
    printf("Informe o valor de x: ");
    scanf("%x", &x);
    printf("Informe o valor de n: ");
    scanf("%d", &n);
    
    c = 1;
    
    for (a = 1; a <= n; a = a + 1)
    {  
        c = c * x;
    }
    
    printf("%d", c);
    
    return 0;
}
