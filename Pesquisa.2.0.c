#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	
	int idade,opcao, contadorSalario = 0;
	int maiorIdade = 0, menorIdade = 999,mulheres5k = 0;
	char sexo;
	float salario, somaSalario = 0, mediaSalario;
	
	do{
	
	printf("\n===========  M E N U ===========\n");
	printf("1 - Adicionar Pessoa\n");
	printf("2 - Exibir os resultados e sair\n");
	printf("Digite a opção desejada: \n");
		scanf("%i",&opcao);
		
		switch(opcao){
			
			case 1: 
			
			printf("Digite a idade: ");
				scanf("%i",&idade);
				
				fflush(stdin);
				
		
			printf("Digite o sexo = M ou F ");
				scanf("%c",&sexo);
				
			sexo = toupper(sexo); //Converter em maiúsculo.
			
		
			printf("Digite o salário: ");
				scanf("%f",&salario);
				
			//somaSalario = somaSalario+salario;
			somaSalario += salario;
			
			//contadorSalario = contadorSalario+1;
			contadorSalario++;
			
			if(idade > maiorIdade){
				maiorIdade = idade;
			} 
			
			//nao tem a { porque tem apenas 1 linha após !!
			if(idade < menorIdade)
				menorIdade = idade;
			
			if(sexo == 'F' && salario >=5000){
				mulheres5k++;
			}
			
		
			break;
		
			case 2:
				
				mediaSalario = somaSalario/contadorSalario;
				
				printf("Média do Salário do grupo: R$ %.2f \n",mediaSalario);
				printf("Maior idade do grupo: %i \n",maiorIdade);
				printf("Menor Idade do grupo: %i \n",menorIdade);
				printf("Quantidade de mulheres com salário maior do que 5mil: %i \n",mulheres5k);
				
				
				
				break;
				
			default:
				
				printf("Opção Inválida....");
			}
			}while(opcao != 2 );
		
		return 0 ;
	}
	
	

		
	
	

