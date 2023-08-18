#include <stdio.h>
// Estevão Martins Oliveira da Silva RGM 29694485

int main(void) 
// Desclaração das variáeis
{
	float salario, imposto= 1.5/100;
  float salariofinal,  impostofinal, vlfinal;
  
  printf("Digite o salario:\n");
  scanf("%f", &salario);
  
   //  Foi atribuido a soma do salario + 1.5/100 que é igual 7,5   
  
		salariofinal = salario-(salario * imposto);
    impostofinal= salario * imposto;
    
 

  
		printf("Valor final: %.2f",salariofinal-vlfinal);
    printf("imposto:%.2f ",impostofinal);
  printf("Valor descontado do imposto:%.2f ", salario-salariofinal);
	
		
	return 0;
}