#include <stdio.h>

int main(void)
{
    int x, n, c, a;
    printf("Informe o valor de n: ");
    scanf("%d", &n);
    
    c = 0;
    
    for (a = 1; a <= n; a = a + 1)
    {  
        c = c + a;
    }
    
    printf("%d", c);
    
    return 0;
}
