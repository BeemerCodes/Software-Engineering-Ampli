#include <stdio.h>
#include <ctype.h>

int main()
{

  float v1, v2, v3;
  char tipo;

  printf("Digite o tipo de m%cdia", 130);
  printf("\nA para aritim%ctica ", 130);
  printf("\nP para ponderada ");
  printf("\nDigite: ");
  scanf("%c", &tipo);

  tipo = toupper(tipo);

  if (tipo == 'A' || tipo == 'P')
  {
    printf("\nDigite o primeiro valor: ");
    scanf("%f", &v1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &v2);

    printf("\nDigite o terceiro valor: ");
    scanf("%f", &v3);

    if (tipo == 'A'){

      printf("\nM%cdia aritim%ctica = %.2f", 130, 130, (v1 + v2 + v3) / 3);

    }else if(tipo == 'P'){

      printf("\nM%cdia ponderada = %.2f", 130, (v1 * 3 + v2 * 3 + v3 * 4) / 10);

    }
  }
  else
  {

    printf("\nO valor inserido %c inv%clido!", 130, 160);
  }
}