#include <stdio.h>

int main()
{
    int senha = 0;
    
     while(senha != 1234) {
    printf("insira sua senha: \n");
    scanf("%d", &senha);
    
    
        if(senha != 1234) {
            printf("senha incorreta\n" );
        }        
    }
printf("senha correta");
    
}
