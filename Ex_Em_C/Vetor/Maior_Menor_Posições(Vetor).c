#include <stdio.h>

int main(void)
{
    int vet[10], maior, menor, n, i, a, b;
    
    for(i = 0; i < 10; i = i + 1)
    {
        printf("Informe um número: ");
        scanf("%d", &vet[i]);
        menor = vet[i];
        maior = vet[i];
    }
    
    for(i = 0; i < 10; i = i + 1)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
            a = i + 1;
        }
        
        if(vet[i] > maior)
        {
            maior = vet[i];
            b = i + 1;
        }
    }
    
    printf("O menor número é %d e sua posição é %d, o maior é %d e sua posição é %d", menor, a, maior, b);
    
    return 0;
}