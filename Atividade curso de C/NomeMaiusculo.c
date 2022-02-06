#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
	

char nome[30];

int i;

printf("Digite seu nome: \n");
gets(nome);
	
for(i=0; nome[i]!=' '; i++)
	nome[i] = toupper(nome[i]);

printf("\n Nome convertido: %s", nome);
getch();
	
return 0;

}