//declaração das bibliotecas
#include <stdio.h>
#include <string.h>


//declarando o modelo cliente.
struct Cliente {
    char   nome[20];
     char  login[20];
     char  email[20];
    char   senha[20];
   };

//declarando array clientes com espaço para 10 clientes.
struct Cliente clientes[10];

    void mostrarCliente ( struct Cliente clientes){
     printf("\nCONFIRME OS DADOS:\n");
printf(" nome: %s", clientes.nome);
        
printf(" login: %s", clientes.login);
        
printf(" email: %s", clientes.email);
        
printf(" senha: %s", clientes.senha);        
        
    }

int main(){
//declarando as variáveis
    int opcao;
    
// declarando do while
  do {
       
    // declarando entrada de dados
    printf(" \nInforme seus dados!\n");
    
    printf("Nome:");
    fgets(clientes[0].nome, 20, stdin);
    printf("Login:");
    fgets(clientes[0].login, 20, stdin);
    printf(" Email:");
    fgets(clientes[0].email, 20, stdin);
    printf(" senha:");
    fgets(clientes[0].senha, 20, stdin);
    
    //declarando comando para exibir os dados inseridos
    mostrarCliente (clientes[0]);
  //declarando a exibição das opções do switch
        printf("\nConfirmar: [1]");
        printf("\nEditar: [2]\n");
        scanf("%d",&opcao);
      getchar();
      //declarando a estrutura switch
    switch (opcao){
    case 1:
    case 2:
       
        default:
    }
  }
    //fechando a estrutura do while
      while (opcao ==2);
    
  
  return 0;
}
