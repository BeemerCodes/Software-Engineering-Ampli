#include<stdio.h>

int main() {

  int i, num1, num2 = 0;

  do{

    printf("\nDigite um numero: ");
    scanf("%d", &num1);

  } while (num1 < 1);

  for (i = 1; i <= num1; i++)
    num2 = num2 + i;

  printf("\nSoma de 1 at%c %d: %d", 130, num1, num2);

}