#include <stdio.h>

int main()
{
    int n1, n2, n3, media;
    
    printf("insira primeiro numero: \n");
    scanf("%d", &n1);
    
    printf("insira segundo numero: \n");
    scanf("%d", &n2);
    
    printf("insira terceiro numero: \n");
    scanf("%d", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    if(media >= 6) {
        printf("aprovado");
    } else if(media >= 4 && media < 6) {
        printf("recuperação");
    } else {
        printf("reprovado");
    }
    
    
    return 0;
}