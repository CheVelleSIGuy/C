#include <stdio.h>

int main(void)
{
    int n, impar, par, z, y;
    
    printf("Informe a quantidade de valores: ");
    scanf("%d", &n);
    
    z = 1;
    impar = 0;
    par = 0;
    
    while(z <= n)
    {
        scanf("%d", &y);
        
        if(y % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
        z = z + 1;
    }
    
    printf("A quantidade de números pares é: %d\n", par);
    
    printf("A quantidade de núemros impares é: %d\n", impar);
    
    return 0;
}
