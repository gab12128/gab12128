int main()
{
    int idade;
    
    printf("insira sua idade: \n");
    scanf("%d", &idade);
    
    if(idade < 12) {
        printf("E uma criança");
        
    } else if(idade = 12 && idade < 17) {
      printf("adolecente");
      
    } else {
        printf("adulto");
    }
    
    
    return 0;
}