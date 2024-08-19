#include <stdio.h>

int main(void)
{
    float a, b, c;
    char p;
    printf("Digite dois números reais: \n");
    scanf("%f %f", &a, &b);
    printf("Digite o simbolo matématico desejado: \n");
    scanf(" %c", &p);
    
    switch(p)
    {
        case '+':
            c = a + b;
            printf("O resultado da soma é:%2.2f \n", c);
            
            break;
            
        case '-':
            c = a - b;
            printf("O resultado da subtração é:%2.2f \n", c);
            
            break;
            
        case '*':
            c = a * b;
            printf("O resultado da multipliacação é:%2.2f \n", c);
            
            break;
            
        case '/':
            c = a / b;
            printf("O resultado da divisão é:%2.2f \n", c);
            
            break;
        
        default:
            printf("Não é póssivel realizar a operação.\n");
            
            break;
    }
    return 0;
}
