#include <stdio.h>

int main(void)
{
    int dia;
    
    printf("Informe um número entre 1 e 7: ");
    scanf("%d", &dia);
    
    switch(dia)
    {
        case 1:
            printf("Domingo\n");
            
            break;
        
        case 2:
            printf("Segunda-feira\n");
            
            break;
        
        case 3:
            printf("Terça-feira\n");
            
            break;
        
        case 4:
            printf("Quarta-feira\n");
            
            break;
        
        case 5:
            printf("Quinta-feira\n");
            
            break;
        
        case 6:
            printf("Sexta-feira\n");
            
            break;
        
        case 7:
            printf("Sábado\n");
            
            break;
        
        default:
            printf("Não é um dia de semana\n");
            
            break;
        
    }

    return 0;
}
