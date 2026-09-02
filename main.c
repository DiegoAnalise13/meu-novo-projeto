//declaração das bibliotecas
#include <stdio.h>
#include <string.h>
//declaração das variáveis 
int main(){
    char  nome[100];
    char  login[100];
    char  email[100];
    char senha[100];
    
    struct Cliente{
    char  nome[100];
    char  login[100];
    char  email[100];
    char senha[100];
    };
    
    struct Cliente clientes[100];
    
    //linha de comando para scanf
    
    printf(" Cadastro\n");
    
    printf("Nome:");
    fgets(clientes[0]. nome, 100, stdin);
    
    printf("Login:");
    fgets(clientes[0]. login, 100, stdin);
    
    printf("Email:");
    fgets(clientes[0]. email, 100, stdin);
    
    printf("Senha:");
    fgets(clientes[0]. senha, 100, stdin);
    
    printf("CONFIRME OS DADOS: %s", clientes[0].login);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}