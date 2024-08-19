#include <stdio.h>
#include <string.h>

int dec_bin(int a)
{
    int a2, z, x, res, u;
    
    u = 0;
    res = 0;
    x = 1;
    
    for(z = a; z > 0; z = z / 2)
	{
		u = (z % 2) * x;
		res = res + u;
		x = x * 10;
	}
	
	return res;
}

int dec_oct(int a)
{
    int a2, z, x;
    
    x = 0;
    a2 = a;
    
    for(z = 0; z <= a; z = z + 8)
	{
		a2 = a2 + x;
		x = 2;
	}
	
	return a2;
}

int main(void) 
{
    int a;
    
    printf("Informe um número em decimal para ser convertido em binário e octal: ");
    scanf("%d", &a);
    
    printf("O número informado convertido para binário: %d\n", dec_bin(a));

    printf("O número informado convertido para octal: %d\n", dec_oct(a));
    
    return 0;
}