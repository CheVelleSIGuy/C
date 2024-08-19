#include <stdio.h>

int main(void)
{
    float notas[500], media;
    int i, acima, n;
    
    printf("Informe a quantidade de notas(máx. 500); ");
    scanf("%d", &n);
    
    media = 0;
    
    for(i = 0; i < n; i = i + 1)
    {
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    
    media = media / n;
    
    acima = 0;
    
    for(i = 0; i < n; i = i + 1)
    {
        if(notas[i] > media)
        {
            acima = acima + i;
        }
    }
    
    printf("Média: %.lf\n", media);
    printf("Notas acima da media: %d\n", acima);
    
    return 0;
}
