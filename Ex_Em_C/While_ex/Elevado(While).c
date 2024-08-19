#include <stdio.h>

int main(void)
{
    int n, x, y, resultado;
    
    printf("Informe a quantidade de valores: ");
    scanf("%d %d", &x, &n);
    
    y = 1;
    resultado = x;
    
    while(y < n)
    {
        resultado = resultado * x;
        y = y + 1;
    }
    
    printf("Resultado: %d\n", resultado);

    return 0;
}
