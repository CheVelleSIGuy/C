#include <stdio.h>

int main(void)
{
    int Carlos, Andre;
    float Felipe,ValorTotal;
    
    scanf("%f",&ValorTotal);
    Carlos = ValorTotal/3;
    Andre = ValorTotal/3;
    Felipe = ValorTotal - Andre - Carlos;
    
 

    printf("%d %d\n %2.2f ", Carlos, Andre, Felipe);
    
    
    return 0;
}