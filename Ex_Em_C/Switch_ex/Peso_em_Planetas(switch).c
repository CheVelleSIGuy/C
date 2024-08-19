#include <stdio.h>

int main(void)
{
    char planeta;
    float peso, pesop;
    printf("Digite o peso desejado: \n");
    scanf("%f", &peso);
    printf("Digite o planeta desejado de 1 a 6(com exeção do planeta Terra): \n");
    scanf(" %c", &planeta);
    
    switch(planeta)
    {
        case '1':
            pesop = (peso / 10) * 3.7;
            printf("Em Mércurio: %2.2f", pesop);
            
            break;
            
        case '2':
            pesop = (peso / 10) * 8.8;
            printf("Em Vênus: %2.2f", pesop);
            
            break;
            
        case '3':
            pesop = (peso / 10) * 3.8;
            printf("Em Marte: %2.2f", pesop);
            
            break;
            
        case '4':
            pesop = (peso / 10) * 26.4;
            printf("Em Júpiter: %2.2f", pesop);
            
            break;
            
        case '5':
            pesop = (peso / 10) * 11.5;
            printf("Em Saturno: %2.2f", pesop);
            
            break;
            
        case '6':
            pesop = (peso / 10) * 11.7;
            printf("Em Uranio: %2.2f", pesop);
            
            break;
            
        default:
            printf("Inválido.");
            
            break;
    }
    
    return 0;
}
