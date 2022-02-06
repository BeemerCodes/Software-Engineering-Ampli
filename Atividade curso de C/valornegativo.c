#include<stdio.h>

int main(){

int v1, v2, v3, v4, v5, negativo = 0, positivo = 0;

printf("----------------------------------------\n");

printf("Digite o primeiro valor: ");
scanf("%d", &v1);

printf("Digite o segundo valor: ");
scanf("%d", &v2);

printf("Digite o terceiro valor: ");
scanf("%d", &v3);

printf("Digite o quarto valor: ");
scanf("%d", &v4);

printf("Digite o quinto valor: ");
scanf("%d", &v5);

if(v1 < 0){
  negativo++;
}

if (v2 < 0){
  negativo++;
}

if (v3 < 0){
  negativo++;
}

if (v4 < 0){
  negativo++;
}

if (v5 < 0){
  negativo++;
}


if (v1 > 0){
  positivo++;
}

if (v2 > 0){
  positivo++;
}

if (v3 > 0){
  positivo++;
}

if (v4 > 0){
  positivo++;
}

if (v5 > 0){
  positivo++;
}

printf("----------------------------------------\n");
printf("\nNumero negativos: %d", negativo);
printf("\nNumeros positivos: %d", positivo);
}