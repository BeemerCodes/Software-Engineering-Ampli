#include<stdio.h>

int main(int argc, char const *argv[])
{
  int y = 10;
  short int x = 37890;
  printf("Tamanho de: %d bytes \n", sizeof(y));
  printf("Tamanho de: %d bytes", sizeof(x));
  return 0;
}

// sizeof não é uma função, é uma constante e por isso não é necessário passagem de paramentro
// ex: sizeof x); funionaria