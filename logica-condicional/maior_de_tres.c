#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    printf("insira primeiro numero: \n");
    scanf("%d", &n1);
    
    printf("insira segundo numero: \n");
    scanf("%d", &n2);
    
    printf("insira terceiro numero: \n");
    scanf("%d", &n3);
    
    if(n1 > n2 && n1 > n3) {
        printf("o primeiro e maior");
        
       } else if(n2 > n1 && n2 > n3) {
        printf("o segundo e maior");
        
    } else if(n3 > n1 && n3 > n2) {
        printf("o terceiro e maior");
        
    } else {
        printf("são iguais");
    }
    
    
    return 0;
}
