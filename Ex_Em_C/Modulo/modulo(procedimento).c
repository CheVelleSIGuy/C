#include <stdio.h>
void troca(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}

void dobra(int *num)
{
    *num = 2 * *num;
}

void soma(int a, int b, int *result)
{
    *result = a + b;
}

void ola_mundo()
{
    printf("Olá mundo!\n");
}


int main(void) 
{
    int a, b, num, r;
    
    scanf("%d %d", &a, &b);
    
    scanf("%d", &num);
    
    dobra(&num);
    
    troca(&a, &b);
    
    soma(a, b, &r);
    
    printf("%d %d\n", a, b);
    
    printf("%d\n", num);
    
    printf("%d\n", r);
    
    ola_mundo();
    
    return 0;
}