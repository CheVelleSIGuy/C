#include <stdio.h>
#include <string.h>

int main(void) 
{
    int vet[20];
    int i, j, k, n, aux, aux1, cont, cont1;
    char cadeia[10];
    
    cont = 0;

    for(i = 0; i < 10; i = i + 1)
    {
        scanf("%d", &vet[i]);
        cont = cont + 1;

        if(vet[i] == -1)
        {
            vet[i] = 0;
            i = 10;
            cont = cont - 1;
        }
    }
    
    scanf("%s", cadeia);
    
    while(strcmp(cadeia, "fim") != 0)
    {
        aux = vet[0];
        
        if(strcmp(cadeia, "insira") == 0)
        {
            scanf("%d", &n);
            
            for(j = 0; j < cont; j = j + 1)
            {
                if(n < vet[j])
                {
                    for(i = cont; i > j; i = i - 1)
                    {
                        aux = vet[i];
                        vet[i] = vet[i - 1];
                        vet[i - 1] = aux;
                    }
                    
                    vet[j] = n;
                    cont = cont + 1;
                    j = cont + 1;
                }
            }
            
            if(j == cont)
            {
                vet[cont] = n;
                cont = cont + 1;
            }
            
        }
        
        if(strcmp(cadeia, "imprima") == 0)
        {
            for(i = 0; i < cont; i = i + 1)
            {
                printf("%d ", vet[i]);
                
            }

            printf("\n");
        }
        
        if(strcmp(cadeia, "remova") == 0)
        {
            scanf("%d", &n);
            vet[n] = 0;
            
            for(i = n; i < cont; i = i + 1)
            {
                vet[i] = vet[i + 1];
            }

            cont = cont - 1;
        }
        
        scanf("%s", cadeia);
    }

    return 0;
}