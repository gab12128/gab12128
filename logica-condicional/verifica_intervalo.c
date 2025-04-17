#include <stdio.h>

int main()
{
    int n;
     
   scanf("%d", &n);
   
   if(n >= 1 && n < 100) {
       printf("sim esta entre 0 e 100");
       
   } else { 
       printf("nao esta");
    
   }
    return 0;
}