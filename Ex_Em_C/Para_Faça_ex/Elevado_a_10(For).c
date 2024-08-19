#include <stdio.h>

int main(void)
{
    int x, a, c;
    printf("Informe o valor de x: ");
    scanf("%x", &x);
    
    c = 1;
    
    for (a = 1; a <= 10; a = a + 1)
    {  
        c = c * x;
    }
    
    printf("%d", c);
    
    return 0;
}
