#include<stdio.h>

int main(){

  int i, soma = 0;

  for (i = 1; i <= 1000; i = i + 2)
    soma += i;

  printf("\n%d", soma);

}