#include<stdio.h>

int main(){

  int i, numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  for (i = 2; i < numero; i+=2)
    printf("%3d", i*i);
  

}