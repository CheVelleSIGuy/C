#include <stdio.h>

int main(void) 
{
    char nome[30];
    int i, cont;
    
    cont = 0;
    for(i=0; i<30 ; i = i + 1)
    {
        scanf("%[^\n]", nome);
        if(nome[i] == '\0')
        {
            i = 30;
        }
        else
        {
            cont = cont + 1;
        }
    }
    
    printf("O tamanho da frase '\%s' e %d caracteres.\n", nome, cont);
    return 0;
}