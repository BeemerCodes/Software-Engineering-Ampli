#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float salario, inss, ir, sal_liquido;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	
	
		if(salario <= 1693.72){
			inss = salario * 0.08;
			
		}if(salario >= 1693.73 && salario <= 2822.90){
			
			if(salario >= 1903.98 && salario <= 2826.65){
				ir = salario * 0.075;
			}
			inss = salario * 0.09;
			
		}if(salario >= 2822.91 && salario <= 5646.80){
		
			if(salario >= 2826.66 && salario <= 3751.05){
				ir = salario * 0.15;
			
			}if(salario >= 3751.06 && salario <= 4664.68){
				ir = salario * 0.225;
					
			}if(salario > 4664.68){
				ir = salario * 0.275;
			}
			inss = salario * 0.11;
			
		}if(salario >= 5646.81){
			inss = 621.04;
			
		}
		
		sal_liquido = (salario - inss) - ir;
		
		printf("\n Desconto INSS: %f", inss);
		printf("\n Salario liquido %2.f", sal_liquido);
	
	return 0;
}