#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Informe dis números: \n");
    scanf("%d %d", &a, &b);
    
    if(a > b)
    {
        printf("%d %d", b, a);
    }
    else
    {
        if(a < b)
        {
            printf("%d %d", a, b);
        }
        else
        {
            printf("%d = %d", a, b);
        }
    }
    
    
    return 0;
}