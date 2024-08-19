#include <stdio.h>

int main(void)
{
    int n, k, x, b, o, p, q, r, s, t, u, v, w, y, soma;
    printf("Informe o valor de n: ");
    scanf("%d", &n);
    
    printf("Informe o valor de k: ");
    scanf("%d", &k);

    soma = 0;
    b = 0;
    o = 0;
    p = 0;
    q = 0;
    r = 0;
    s = 0;
    t = 0;
    u = 0;
    v = 0;
    w = 0;

    for(x = 1; x <= n; x = x + 1)
    {
        b = k % 10; 

        if(b == 1)
        {
            o = 1;
        }
        else
        {
            if (b == 2)
            {
                p = 2;
            }
            else
            {
                if (b == 3)
                {
                    q = 3;
                }
                else
                {
                    if (b == 4)
                    {
                        r = 4;
                    }
                    else
                    {
                        if (b == 5)
                        {
                            s = 5;
                        }
                        else
                        {
                            if (b == 6)
                            {
                                t = 6;
                            }
                            else
                            {
                                if (b == 7)
                                {
                                    u = 7;
                                }
                                else
                                {
                                    if (b == 8)
                                    {
                                        v = 8;
                                    }
                                    else
                                    {
                                        if (b == 9)
                                        {
                                            w = 9;
                                        }
                                        else
                                        {
                                            y = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        k = k / 10; 
    
    }

    soma = (o + p + q + r + s + t + u + v + w + y);

    printf("%d", soma);

    return 0;

}