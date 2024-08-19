#include <stdio.h>

int main(void)
{
    int n, a, b, c, d;
    for (n = 100; n <= 1000; n = n + 1)
    {
        a = n / 100;
        b = (n % 100) / 10;
        c = n % 10;
        
        d = a + b + c;
        
        if(d > 10)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}

