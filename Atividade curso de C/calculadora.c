#include<stdio.h>

int main() {

  int escolha, resultado, num1, num2;

  printf("\nQual o tipo de calculo: ");
  scanf("%d", &escolha);

  while (escolha > 4 || escolha < 0){
    printf("\nDigite um valor correspondente: ");
    printf("\n1 - soma");
    printf("\n2 - Subtra%c%co", 135, 198);
    printf("\n3 - Divis%co", 198);
    printf("\n4 - Multiplica%c%co", 135, 198);
    printf("\n0 - Sair");

    printf("\nQual o tipo de calculo: ");
    scanf("%d", &escolha);
  }

  switch (escolha){

    case 1:
      printf("\nSoma...");

      printf("\nDigite o primeiro valor: ");
      scanf("%d", &num1);

      printf("\nDigite o segundo valor: ");
      scanf("%d", &num2);

      resultado = num1 + num2;

      printf("\nResultado: %d", resultado);

    break;

    case 2:

      printf("\nSubtra%c%co...", 135, 198);

      printf("\nDigite o primeiro valor: ");
      scanf("%d", &num1);

      printf("\nDigite o segundo valor: ");
      scanf("%d", &num2);

      resultado = num1 - num2;

      printf("\nResultado: %d", resultado);

    break;

    case 3: 
    
      printf("\nDivis%co...", 198);

      printf("\nDigite o primeiro valor: ");
      scanf("%d", &num1);

      printf("\nDigite o segundo valor: ");
      scanf("%d", &num2);

      resultado = num1 / num2;

      printf("\nResultado: %d", resultado);

    break;

    case 4:
    
       printf("\nMultiplica%c%c...", 135, 198);

      printf("\nDigite o primeiro valor: ");
      scanf("%d", &num1);

      printf("\nDigite o segundo valor: ");
      scanf("%d", &num2);

      resultado = num1 * num2;

      printf("\nResultado: %d", resultado);

    break;

    case 0:
    break;

    default: break;

  }
  

}