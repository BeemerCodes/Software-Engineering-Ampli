#include<stdio.h>

int main() {

  float valor1, valor2, media;

  do
  {
    printf("\nDigite primeira nota: ");
    scanf("%f", &valor1);

  } while (valor1 < 0 || valor1 > 10);

  do
  {
    printf("\nDigite segunda nota: ");
    scanf("%f", &valor2);

  } while (valor2 < 0 || valor2 > 10);

  media = (valor1 + valor2) / 2;

  printf("\nM%cdia: %.2f", 130, media);
}