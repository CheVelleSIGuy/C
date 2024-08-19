#include <stdio.h>

int main(void)
{
    int n, vet[100], i;
    
    printf("Informe a quantidade de números: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i = i + 1)
    {
        printf("Informe o número: ");
        scanf("%d", &vet[i]);
    }
    
    for(i = n - 1 ; i >= 0; i = i - 1)
    {
        printf("%d\n", vet[i]);
    }
    return 0;
}
