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
    int nomeValido1;
    int nomeValido2;
    char *espaco;
    char *enter;
    
    nomeValido1 =1;
    nomeValido2 =0;
    
// declarando do while
  do {
       
    // declarando entrada de dados
    printf(" \nInforme seus dados!\n");
    
    printf("Nome:");
    fgets(clientes[0].nome, 20, stdin);
      //procurando espaço
      espaco = strchr(clientes[0].nome,' ');
      //analiando o \n do fgets
      enter = strchr(clientes[0].nome,'\n');
      
      if (enter != NULL) {
          *enter ='\0';
      }
    //adicionando condições para nome ser valido.
      if (espaco && *(espaco -1) && *(espaco +1)){
      
          
    printf("Login:");
    fgets(clientes[0].login, 20, stdin);
    printf(" Email:");
    fgets(clientes[0].email, 20, stdin);
    printf(" senha:");
    fgets(clientes[0].senha, 20, stdin);
      
    //exibindo os dados para confirmação
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
      //tratando nome que não tem espaço
     else {
         printf("\nNome invalido\n"); 
          
      
     }  
  }
    
    
    // repetindo o cadastro enquanto a opção for editar ou o nome estiver inválido
      while (opcao ==2 || nomeValido2 ==0);
      
  
    
  return 0;
}
