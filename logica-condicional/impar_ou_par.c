#include <stdio.h>

int main()
{
    int n;
    
    printf("insira sua numero: \n");
    scanf("%d", &n);
    
    if(n % 2 == 0) {
        printf("par");
        
       } else {
        printf("impar");
    }
    
    
    return 0;
}