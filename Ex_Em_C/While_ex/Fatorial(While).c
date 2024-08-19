#include <stdio.h>

int main(void)
{
    int n, x, y, resultado;
    
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    x = 1;
    resultado = 1;
    
    while(x <= n)
    {
        resultado = resultado * x;
        x = x + 1;
    }
    
    printf("Resultado: %d\n", resultado);

    return 0;
}
