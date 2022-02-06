#include<stdio.h>

int main() {

  int senha = 1234, digitado;

  printf("Usuario: Admin");
  printf("\nDigite a senha: ");
  scanf("%d", &digitado);

  while (digitado != senha){

     printf("\nSenha invalida");
     printf("\nDigite a senha novamente: ");
     scanf("%d", &digitado);
  
  }

  printf("\nAcesso autorizado!");
  

}