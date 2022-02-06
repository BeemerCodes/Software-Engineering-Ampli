#include <stdio.h>

int main(){
  
  int n1;

  printf("--------------------Par ou Impar?--------------------\n\n");
  printf("Digite o valor: \n");
  scanf("%d", &n1);

  if (n1 % 2 == 0){
    
    printf("\nO valor %d %c Par!!\n\n", n1, 130);

  }else {
    
    printf("\nO valor %d %c Impar!!\n\n", n1, 130);

  }

  printf("-----------------------------------------------------\n\n");

  return 0;
}
