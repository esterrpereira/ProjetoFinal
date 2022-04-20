#include <stdio.h>

int main(void) {

 /* 
Josefá é uma feirante que possui em sua banca 05 produtos com os 
seguintes preços: tomate R$2,30; cebola R$1,20; cenoura R$ 3,70; abobrinha R$
5,10; brócolis R$ 1,23. Desenvolva um programa que possibilite ao usuários as 
seguintes opções (menu):
● listar o nome dos produtos;
● listar o nome e o preço dos produtos;
● alterar o preço de um produto: o usuário deverá escolher qual produto deseja 
alterar o valor (sugestão, mostre aos usuários o código de cada produto para 
ele escolher qual ele vai alterar);
● sair.
*/

  int opcao,codigo ,produto;
  float preco;
  
      printf("\n\n\t\tSEJA BEM-VINDO(A)\n\n\t1-LISTAR O NOME DOS PRODUTOS\n\t2-LISTAR O NOME E O PREÇO DOS PRODUTOS\n\t3-ALTERAR O PREÇO DO PRODUTOS\n\n=================================================\n\t Digite a opção ou 0 para parar: ");
  scanf("%d",&opcao);

  

  //switch-case para escolha 
  switch(opcao){
   case 1:
    printf("\n\n\t\t1-TOMATE\n\t\t2-CEBOLA\n\t\t3-CENOURA\n\t\t4-ABOBRINHA\n\t\t5-BRÓCOLIS");
    break;
    case 2:
      printf("\n\n\t\t1-TOMATE\t\tR$2,30\n\t\t2-CEBOLA\t\tR$1,20\n\t\t3-CENOURA\t\tR$3,70\n\t\t4-ABOBRINHA\t\tR$5,10\n\t\t5-BRÓCOLIS\t\tR$1,23");
      break;
    case 3:
    printf("\n\n\t\t1-TOMATE\n\t\t2-CEBOLA\n\t\t3-CENOURA\n\t\t4-ABOBRINHA\n\t\t5-BRÓCOLIS\n\n=================================================\nDigite o código do produto que deseja alterar: ");
      scanf("%d",&codigo);
      // um switch-case dentro do case 3 para a mudança do preço
      switch(codigo) {
        case 1:
        printf("(1) Digite o novo preço: ");
        scanf("%f",&preco);
          //CONFIRMAÇÃO
          while(preco){
            printf("Alteração feita com sucesso");
            break;
          }
          
        break;
         case 2:
        printf("(2) Digite o novo preço: "); 
        scanf("%f",&preco);
           //CONFIRMAÇÃO
           while(preco){
            printf("Alteração feita com sucesso");
            break;
             }
           
        break;
         case 3:
        printf("(3) Digite o novo preço: "); 
        scanf("%f",&preco);
           //CONFIRMAÇÃO
           while(preco){
            printf("Alteração feita com sucesso");
            break;
             }
            
       }
        break;
         case 4:
        printf("(4) Digite o novo preço: ");
        scanf("%f",&preco);
           //CONFIRMAÇÃO
           while(preco){
            printf("Alteração feita com sucesso");
            break;
             }
          
        break;
       
         case 5:
        printf("(5) Digite o novo preço: ");
        scanf("%f",&preco);
           //CONFIRMAÇÃO
           while(preco){
            printf("Alteração feita com sucesso");
            break;
             }
            
        break;
    default:
    printf("\n\n\t\tADEUS");
        } 
  
        
      }
 

  
