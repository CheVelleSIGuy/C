#include <stdio.h>

int main(void)
{

int inicioh, iniciom, inicios, terminoh, terminom, terminos, duracaoh, duracaom, duracaos;

scanf("%dh%dm%ds", &inicioh, &iniciom, &inicios);
scanf("%dh%dm%ds", &terminoh, &terminom, &terminos);

if(terminoh >= inicioh)
{
    duracaoh = terminoh - inicioh;
    duracaom = terminom - iniciom;
    duracaos = terminos - inicios;
    
    if(duracaos < 0)
    {
        duracaom = (terminom - 1) - iniciom;
        duracaos = (60 + terminos) - inicios;

        if(duracaom < 0)
        {
            duracaoh = (terminoh - 1) - inicioh;
            duracaom = (terminom + 59) - iniciom;
            if(duracaoh < 0)
            {
                duracaoh = (terminoh + 23) - inicioh;

            }
        }
    }
}

if(inicioh > terminoh)
{
    duracaoh = (terminoh + 24) - inicioh;
    duracaom = terminom - iniciom;
    duracaos = terminos - inicios;
    
    if(duracaos < 0)
    {
        duracaom = (terminom - 1) - iniciom;
        duracaos = (60 + terminos) - inicios;

        if(duracaom < 0)
        {
            duracaoh = (terminoh - 1) - inicioh;
            duracaom = (terminom + 59) - iniciom;
            if(duracaoh < 0)
            {
                duracaoh = (terminoh + 23) - inicioh;

            }
        }
    }
}

if(duracaoh < 1)
{
    if(duracaom < 1)
    {
        if(duracaos < 1)
        {
            duracaoh = 24;
        }
    }
}

printf("%dh%dm%ds", duracaoh, duracaom, duracaos);

return 0;
}