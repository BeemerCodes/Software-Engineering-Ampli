#include<stdio.h>
#include<ctype.h>

int main(){

  char caracter;

  printf("Digite uma letra para saber se %c vogal ou n%co: ", 130, 198);
  scanf("%c", &caracter);

  caracter = toupper(caracter);

  if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'){
    
    printf("\nA letra %c %c um vogal!", caracter, 130);
  
  }else{

    printf("\nA letra %c %c uma consoante!", caracter, 130);

  }
  

}