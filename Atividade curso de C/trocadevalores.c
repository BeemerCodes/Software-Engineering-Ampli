#include<stdio.h>

int main(){

  int a, b;

  printf("\nDigite o valor de A: ");
  scanf("%d", &a);

  printf("Digite o valor de B: ");
  scanf("%d", &b);

  printf("\nValores antes da troca: %d e %d ", a, b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("\n");
  printf("Valores ap%cs a troca: %d e %d ", 162, a, b);
}