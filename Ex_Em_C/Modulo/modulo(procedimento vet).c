#include <stdio.h>
void le_vetor(int vet[1000], int tam)
{
    int i;
    for(i = 0;i < tam;i = i + 1)
    {
        scanf("%d", &vet[i]);
    }
}

void escreve_vetor(int vet[1000], int tam)
{
    int i;
    for(i = 0;i < tam;i= i + 1)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(void) 
{
    int vet[1000], n;
    
    scanf("%d", &n);
    
    le_vetor(vet, n);
    
    escreve_vetor(vet, n);
    
    return 0;
}