#include <stdio.h>

int main(void)
{
    int a, b, c;
    char o;
    
    printf("Digite dois números inteiros: \n");
    scanf("%d %d", &a, &b);
    printf("Informe a opção entre 1 e 3: \n");
    scanf(" %c", &o);
    
    switch(o)
    {
        case '1':
            c = (a + b) / 2;
            printf("O resultado é: %d", c);
            
            break;
        
        case '2':
            c = (a*a)+(b*b);
            printf("O resultado é: %d", c);
            
            break;
        
        case '3':
        
            if(b <= 0)
            {
                printf("inválido.");
            }
            
            else
            {
                c = a % b;
                printf("O resultado é: %d", c);
            }
            
            break;
        
        default:
            printf("Inválido");
            
            break;
    }
    
    
    return 0;
}