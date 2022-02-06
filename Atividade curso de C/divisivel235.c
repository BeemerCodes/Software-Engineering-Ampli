#include<stdio.h>

int main(){

  int entrada;

  printf("Digite um valor: ");
  scanf("%d", &entrada);

  if ((entrada % 2) == 0)
  {
    printf("\nEsse numero %c divisivel por 2!\n", 130);
  
  } 
  
  if((entrada % 3) == 0)
  {
    printf("\nEsse numero %c divisivel por 3!\n", 130);

  }
  
  if((entrada % 5) == 0)
  {
    printf("\nEsse numero %c divisivel por 5!\n", 130);

  }
  
  if((entrada % 2 ) != 0 && (entrada % 3) != 0 && (entrada % 5) != 0){
    printf("\nO numero inserido n%co %c divisivel por 2, 3 ou 5!", 198, 130);
  }

}