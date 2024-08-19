#include <stdio.h>

int main(void)
{

    int iniciod, inicioh, iniciom, inicios, terminod, terminoh, terminom, terminos, duracaod, duracaoh, duracaom, duracaos;

    scanf("%d", &iniciod);
    scanf("%dh%dm%ds", &inicioh, &iniciom, &inicios);
    scanf("%d", &terminod);
    scanf("%dh%dm%ds", &terminoh, &terminom, &terminos);

    if(terminod >= iniciod)
    {
        duracaod = terminod - iniciod;
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
                   duracaod = (terminod -1) - iniciod;
                   duracaoh = (terminoh + 23) - inicioh;
                    if(duracaod < 0)
                    {
                        duracaod = (terminod + 1) - iniciod;
                    }

                }
            }
        }
    }

    if(iniciod > terminod)
    {
        duracaod = (terminod + 1) - iniciod;
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
                    duracaod = (terminod - 1) - iniciod;
                    duracaoh = (terminoh + 23) - inicioh;
                    if(duracaod < 0)
                    {
                        duracaod = (terminod + 1) - iniciod;
                    }

                }
            }
        }
    }

    if(duracaos < 0)
    {
        duracaom = (terminom - 1) - iniciom;
        duracaos = (60 + terminos) - inicios;
    }
    
    if(duracaom < 0)
    {
        duracaoh = (terminoh - 1) - inicioh;
        duracaom = (terminom + 60) - iniciom;
        if(duracaoh < 0)
        {
            duracaod = (terminod - 1) - iniciod;
            duracaoh = (terminoh + 23) - inicioh;    
        }
    }

    if(duracaoh < 0)
    {
        duracaod = (terminod - 1) - iniciod;
        duracaoh = (terminoh + 24) - inicioh;
    }

    if(duracaod < 1)
    {
        if(duracaoh < 1)
        {
            if(duracaom < 1)
            {
                if(duracaos < 1)
                {
                    duracaod = 30;
                }
            }
        }
    }   

    printf("%d d %d h %d m %d s", duracaod, duracaoh, duracaom, duracaos);

    return 0;
}