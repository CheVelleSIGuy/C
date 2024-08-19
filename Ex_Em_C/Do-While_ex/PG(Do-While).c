#include <stdio.h>

int main(void)
{
    int n, x, y, r, a, b, resultado;
    
    printf("Informe o valor de n, a e r: ");
    scanf("%d %d %d", &n, &a, &r);

    x = 1;
    y = 1;
    b = 1;
    resultado = a;
    
    do
    {
        resultado = resultado * b;
        x = x + 1; 
        printf("%d, ", resultado);
        b = r;
    }
    while(x <= n);

    return 0;
}
