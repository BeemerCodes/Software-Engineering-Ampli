#include<stdio.h>

int main(){

  int mes;

  printf("Digite o valor para consultar o m%cs:", 136);
  scanf("%d", &mes);

  switch (mes)
  {

    case (1):

      printf("\nO m%cs escolhido foi Janeiro!");
      break;


    case (2):

      printf("\nO m%cs escolhido foi Fevereiro!", 136);
      break;

    

    case (3):

      printf("\nO m%cs escolhido foi Mar%co!", 136, 135);
      break;

    

    case (4):

      printf("\nO m%cs escolhido foi Abril!", 136);
      break;

    

    case (5):

      printf("\nO m%cs escolhido foi Maio!", 136);
      break;

    

    case (6):

      printf("\nO m%cs escolhido foi Junho!", 136);
      break;

    

    case (7):

      printf("\nO m%cs escolhido foi Julho!", 136);
      break;

    

    case (8):

      printf("\nO m%cs escolhido foi Agosto!", 136);
      break;

    

    case (9):

      printf("\nO m%cs escolhido foi Setembro!", 136);
      break;

    

    case (10):

      printf("\nO m%cs escolhido foi Outubro!", 136);
      break;

    

    case (11):

      printf("\nO m%cs escolhido foi Novembro!", 136);
      break;

    

    case (12):

      printf("\nO m%cs escolhido foi Dezembro!", 136);
      break;

    

    default:
    printf("\nValor invalido!");
      break;
  }
}