#include<stdio.h>

int main(){

  int lado1, lado2, lado3;

  printf("Digite o primeiro valor: ");
  scanf("%d", &lado1);

  printf("Digite o segundo valor: ");
  scanf("%d", &lado2);

  printf("Digite o terceiro valor: ");
  scanf("%d", &lado3);

  if (lado1 == lado2 && lado2 == lado3){

    printf("\nTri%cngulo Equil%ctero! ", 131, 160);
  
  }else if (lado1 == lado2 || lado1 == lado3){

    printf("\nTri%cngulo Is%cceles!", 131, 162);

  }else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){

    printf("\nTri%cngulo Escaleno!", 131);

  }

}