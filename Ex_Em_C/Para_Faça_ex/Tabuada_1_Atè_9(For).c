
#include <stdio.h>

int main(void)
{
    int a, b, c;
    c = 0;
    for (a = 1; a <= 9; a = a + 1)
    {
        printf("Tabuada do %d:", a);
        for (b = 1; b <= 10; b = b + 1)
        {
            c = a * b;
            printf("\t%2d x %d = %2d", a, b, c);
        }
        printf("\n");
    }
    
    return 0;
}