#include <stdio.h>

int main(void)
{
    int n, z;
    
    printf("Informe o valor de n: ");
    scanf("%d", &n);
    
    z = 0;
    
    while(n != 0)
    {
        z = z + n;
        n = n - 1;
    }
    
    printf("A soma é: %d", z);
    
    return 0;
}
