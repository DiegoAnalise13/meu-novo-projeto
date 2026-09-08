//declaração das bibliotecas
#include <stdio.h>
#include <string.h>

struct Cliente {
    char   nome[20];
     char  login[20];
     char  email[20];
    char   senha[20];
   };

struct Cliente clientes[10];

    void mostrarCliente ( struct Cliente clientes){
     printf("\nCONFIRME OS DADOS:\n");
printf(" nome: %s", clientes.nome);
        
printf(" login: %s", clientes.login);
        
printf(" email: %s", clientes.email);
        
printf(" senha: %s", clientes.senha);        
        
    }

int main(){
//declaracao das variaveis
    int opcao;
    
//entrada de dados
  do {
       
    
    printf(" \nInforme seus dados!\n");
    
    printf("Nome:");
    fgets(clientes[0].nome, 20, stdin);
    printf("Login:");
    fgets(clientes[0].login, 20, stdin);
    printf(" Email:");
    fgets(clientes[0].email, 20, stdin);
    printf(" senha:");
    fgets(clientes[0].senha, 20, stdin);
    
    
    mostrarCliente (clientes[0]);
  
        printf("\nConfirmar: [1]");
        printf("\nEditar: [2]\n");
        scanf("%d",&opcao);
      getchar();
      
    switch (opcao){
    case 1:
    case 2:
       
        default:
    }
  }
      while (opcao ==2);
    
  
  return 0;
}
//testa git 1.