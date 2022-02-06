#include<stdio.h>
#include<math.h>

int main(){
  
  float imc, altura, peso;

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("\nDigite seu peso: ");
  scanf("%f", &peso);

  imc = (peso / pow(altura, 2));

  printf("IMC: %.2f\n", (float)imc);

  if(imc < 18.5){
    printf("Abaixo do peso!");
  
  }else if(imc >= 18.5 && imc < 25){
    printf("Peso ideal!");

  }if (imc > 25 && imc <= 30){
    printf("Sobre peso!");
  
  }if (imc >= 30 && imc <= 35){
    printf("Obesidade grau 1!");
  
  }if (imc > 35 && imc < 40){
    printf("Obesidade grau 2!");

  }if (imc >= 40){
    printf("Obesidade grau 3!");
  }
}