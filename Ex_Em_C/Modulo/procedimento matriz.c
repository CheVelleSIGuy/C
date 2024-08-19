#include <stdio.h>
void le_vetor(int vet[][1000], int tam, int tam1)
{
    int i, j;
    for(i = 0;i < tam;i = i + 1)
    {
        for(j = 0; j < tam1; j = j + 1)
        {
            scanf("%d", &vet[i][j]);
        }
        printf("\n");
    }
}

void escreve_vetor(int vet[][1000], int tam, int tam1)
{
    int i, j;
    for(i = 0;i < tam;i= i + 1)
    {
        for(j = 0; j < tam1; j = j + 1)
        {
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }
    
}

int main(void) 
{
    int vet[1000][1000], n, n1;
    
    scanf("%d %d", &n, &n1);
    
    le_vetor(vet, n, n1);
    
    escreve_vetor(vet, n, n1);
    
    return 0;
}