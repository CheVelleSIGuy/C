#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Informe três valores de um triangulo válido: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a + b < c || a + c < b || b + c < a)
    {
        printf("O triângulo informado não é válido.");
    }
    else
    {
        if(a == b && c == a)
        {
            printf("O triãngulo é equilátero.");
        }
        else
        {
            if(a == b && a != c || a == c && a != b || b == c && c != a)
            {
                printf("O triãngulo é isósceles.");
            }
            else
            {
                printf("O triângulo é escaleno.");
            }
        }
    }
    
    
    return 0;
}