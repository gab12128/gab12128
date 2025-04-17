#include <stdio.h>

int main()
{
    int n, tabuada;
     
    scanf("%d", &n);
    
    for(tabuada = 1; tabuada <=10; tabuada++){
    printf("%d\n", n*tabuada);
    }
    
    return 0;
}