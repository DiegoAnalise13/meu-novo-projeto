//declaração das bibliotecas
#include <stdio.h>
#include <string.h>
//declaração das variáveis 
int main(){
    char  nome[100];
    char  login[100];
    char  email[100];
    char senha[100];
   // declarando os itens dentro de cliente. 
    struct Cliente{
    char  nome[100];
    char  login[100];
    char  email[100];
    char senha[100];
    };
    //informando a quantidade de clientes 
    struct Cliente clientes[100];
    
    //linha de cadastro
    
    printf(" Cadastro\n");
    
    printf("Nome:");
    fgets(clientes[0]. nome, 100, stdin);
    
    printf("Login:");
    fgets(clientes[0]. login, 100, stdin);
    
    printf("Email:");
    fgets(clientes[0]. email, 100, stdin);
    
    printf("Senha:");
    fgets(clientes[0]. senha, 100, stdin);
    
    // confirmacao da dados preenchidos 
    printf("CONFIRME OS DADOS:\nnome: %s\nlogin: %s\nemail: %s\nsenha: %s\n", clientes[0].nome, clientes[0].login, clientes[0].email, clientes[0].senha);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}